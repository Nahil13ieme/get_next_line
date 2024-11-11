/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 01:32:05 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/11 01:32:05 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*res;
	char	*tmp;

	if(!s1 && !s2)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	tmp = res;
	if (!res )
		return (NULL);
	while(*s1)
		*tmp++ = *s1++;
	while(*s2)
		*tmp++ = *s2++;
	*tmp = 0;
	free(s1);
	return (res);
}

char	*ft_strchr(char *s,	int c)
{
	char	*ptr;

	ptr = s;
	while(*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}