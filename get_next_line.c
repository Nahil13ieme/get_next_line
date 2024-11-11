/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:52:45 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 17:52:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char *get_next_line(int fd)
{
	static char *staticBuffer;
	char *buffer;
	char *line;
	char *res;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
		return (NULL);
	
	while(read(fd, &buffer, BUFFER_SIZE))
	{
		// If i can read i need to add the buffer in the staticBuffer but if i cannot read i need to make sure the 
		// static buffer is empty too
	}
	// Check if staticBuffer is empty, if not i need to return line by line
}