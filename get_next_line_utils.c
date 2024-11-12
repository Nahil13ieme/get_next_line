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
<<<<<<< HEAD
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
=======
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	tmp = res;
	if (!res)
		return (NULL);
	while(*s1)
		*res++ = *s1++;
	while(*s2)
		*res++ = *s2++;
	*res = 0;
	free(s1 - sizeof(s1));
	return (tmp);
}

char	*ft_strdup(char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (*s)
		*copy++ = *s++;
	*copy = '\0';
	return (copy - len);
}

char	*ft_strdup_line(char *s)
{
	size_t	len;
	char	*copy;

	len = 0;
	while(s[len] && s[len] != '\n')
		len++;
	copy = (char *)malloc(len+1);
	if (copy == NULL)
		return (NULL);
	while (*s)
		*copy++ = *s++;
	*copy = '\0';
	return (copy - len);
>>>>>>> bc101de56d606e50406e3c3d6902275c5c0bdf4a
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
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}