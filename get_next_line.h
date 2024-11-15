/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:56:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 17:56:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin_free(char *s1, char *s2);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_strchr(char *s,	int c);
char	*ft_strdup_line(char *s);

#endif