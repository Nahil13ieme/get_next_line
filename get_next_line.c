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

	buffer = malloc(BUFFER_SIZE + 1);
	readBytes = read(fd, buffer, BUFFER_SIZE);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (readBytes > 0)
	{
		buffer[BUFFER_SIZE] = 0;
		staticBuffer = ft_strjoin_free(staticBuffer, buffer);
		line = ft_strchr(staticBuffer, '\n');
		if(line)
		{
			line = ft_strchr(staticBuffer, '\n');
			res = ft_strdup_line(staticBuffer);
			*line++ = 0;
			staticBuffer = ft_strdup(line);
			free(buffer);
			printf("line = '%s'\n", line);
			return (res);
		}
		readBytes = read(fd, buffer, BUFFER_SIZE);
	}
	if (staticBuffer)
	{
		printf("staticBuffer = '%s'\n", staticBuffer);
		line = ft_strchr(staticBuffer, '\n');
		if (line == NULL)
			line = ft_strchr(staticBuffer, 0);
		res = ft_strdup_line(staticBuffer);
		*line++ = 0;
		staticBuffer = ft_strdup(line);
		free(buffer);
		if(staticBuffer == NULL)
			free(staticBuffer);
		return (res);
	}
	free(buffer);
	return (NULL);
}