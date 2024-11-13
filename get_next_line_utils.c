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

	if (!s)
		return (0);
	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char			*array;
	unsigned int	size;
	int				i;
	int				j;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen((s1)) + ft_strlen(s2);
	array = (char *)malloc(sizeof(char) * (size + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			array[j++] = s1[i++];
		i = 0;
	}
	while (s2[i])
		array[j++] = s2[i++];
	array[size] = '\0';
	free(s1);
	return (array);
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strdup_line(char *s)
{
	size_t	len;
	char	*copy;

	len = 0;
	printf("s = '%s'\n", s);
	while (s[len] && s[len] != '\n')
		len++;
	if (len == 0)
		return (NULL);
	if (s[len] == '\0')
		len++;
	copy = (char *)malloc(len+1);
	ft_strlcpy(copy, s, len);
	return (copy);
}

char	*ft_strchr(char *s,	int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}