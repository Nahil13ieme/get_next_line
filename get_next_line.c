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

char	*get_next_line(int fd)
{
	static char	*staticBuffer;
	char		buffer[BUFFER_SIZE];
	size_t		readBytes;
	char		*line;

	readBytes = read(fd, buffer, BUFFER_SIZE);
	if (readBytes <=)
		return (NULL);
	while(readBytes > 0)
	{
		buffer[readBytes] = 0;
		staticBuffer = ft_strjoin_free(staticBuffer, buffer);
		if (!staticBuffer)
			return (NULL);
		if (ft_strchr(staticBuffer, '\n') != NULL)
		{

		}
		readBytes = read(fd, buffer, BUFFER_SIZE);
	}
	return (NULL);
}