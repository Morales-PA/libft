/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:14:29 by juan              #+#    #+#             */
/*   Updated: 2026/10/29 15:55:28 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*allocate_str(size_t len, size_t start, char *s1)
{
	char	*result;
	size_t	i;

	result = malloc((len + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	while (end > start && is_char_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	return (allocate_str(len, start, (char *)s1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strtrim("ab cd  f    ", " "));
	return (0);
}
*/
