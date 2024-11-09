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
	//static char	*stash;
	char		buffer[BUFFER_SIZE];
	int			i = 0;
	char		*result;
	size_t		count = 0;
	//int			isDone;

	while(read(fd, buffer, count))
	{
		while(buffer[i])
		{
			if (buffer[i] == '\n')
			{
				result = malloc(sizeof(char) * 10 );
				result[9] = '\0';
				while(*result)
					*result++ = 'a';
				return (result);
			}
			i++;
		}
	}
	return (NULL);
}