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

<<<<<<< HEAD
	readBytes = read(fd, buffer, BUFFER_SIZE);
	if (readBytes <= 0)
=======
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
>>>>>>> bc101de56d606e50406e3c3d6902275c5c0bdf4a
		return (NULL);
	
	while(read(fd, &buffer, BUFFER_SIZE))
	{
<<<<<<< HEAD
		buffer[readBytes] = 0;
		staticBuffer = ft_strjoin_free(staticBuffer, buffer);
		if (!staticBuffer)
			return (NULL);
		if (ft_strchr(staticBuffer, '\n') != NULL)
		{
			line = ft_strchr(staticBuffer, '\n');
			return (line);
		}
		readBytes = read(fd, buffer, BUFFER_SIZE);
=======
		// If i can read i need to add the buffer in the staticBuffer but if i cannot read i need to make sure the 
		// static buffer is empty too
>>>>>>> bc101de56d606e50406e3c3d6902275c5c0bdf4a
	}
	// Check if staticBuffer is empty, if not i need to return line by line
}