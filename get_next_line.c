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
	size_t readBytes;

	buffer = malloc(BUFFER_SIZE + 1);
	readBytes = read(fd, buffer, BUFFER_SIZE);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while(readBytes > 0)
	{
		buffer[BUFFER_SIZE] = 0;
		staticBuffer = ft_strjoin_free(staticBuffer, buffer);
		line = ft_strchr(staticBuffer, '\n');
		if(line)
		{
			printf("staticBuffer = %s", staticBuffer);
			line = ft_strchr(staticBuffer, '\n');
			*line++ = 0;
			res = ft_strdup_line(staticBuffer);
			staticBuffer = line;
			free(buffer);
			return (ft_strdup(res));
		}
		readBytes = read(fd, buffer, BUFFER_SIZE);
		// If i can read i need to add the buffer in the staticBuffer but if i cannot read i need to make sure the 
		// static buffer is empty too
	}
	if(staticBuffer)
	{
		printf("staticBuffer = %s", staticBuffer);
		line = ft_strchr(staticBuffer, '\n');
		*line++ = 0;
		res = ft_strdup_line(staticBuffer);
		staticBuffer = line;
		free(buffer);
		return (ft_strdup(res));
	}
	free(buffer);
	return (NULL);
	// Check if staticBuffer is empty, if not i need to return line by line
}