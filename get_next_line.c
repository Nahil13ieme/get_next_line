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
	char		*buffer;
	char		*line;
	char		*res;
	size_t		readBytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if(!buffer)
		return (NULL);
	readBytes = read(fd, buffer, BUFFER_SIZE);
	while (readBytes > 0)
	{
		buffer[readBytes] = 0;
		staticBuffer = ft_strjoin_free(staticBuffer, buffer);
		line = ft_strchr(staticBuffer, '\n');
		if(line)
		{
			res = ft_strdup_line(staticBuffer);
			*line++ = 0;
			staticBuffer = ft_strdup(line);
			free(buffer);
			return (res);
		}
		free(buffer);
		buffer = malloc(BUFFER_SIZE + 1);
		if(!buffer)
			return (NULL);
		readBytes = read(fd, buffer, BUFFER_SIZE);
	}
	if (staticBuffer)
	{
		line = ft_strchr(staticBuffer, '\n');
		res = ft_strdup_line(staticBuffer);
		if (line == NULL)
		{
			free(buffer);
			free(staticBuffer);
			staticBuffer = NULL;
			return(res);
		}
		*line++ = 0;
		staticBuffer = ft_strdup(line);
		free(buffer);
		return (res);
	}
	free(buffer);
	free(staticBuffer);
	staticBuffer = NULL;
	return (NULL);
}