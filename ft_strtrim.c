/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:14:29 by juan              #+#    #+#             */
/*   Updated: 2026/10/21 03:25:28 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_and_populate_str(char const *s1, size_t i, size_t j)
{
	char	*str;
	size_t	k;

	str = malloc(sizeof(char [ft_strlen(s1) - i - j]));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (k < ft_strlen(s1) - i - j)
	{
		str[k] = s1[k + i];
		k++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		is_done;
	size_t	i;
	size_t	j;

	is_done = 0;
	i = 0;
	while (is_done != 1)
	{
		if (s1[i] != *set)
			is_done = 1;
		i++;
	}
	j = 0;
	while (is_done != 2)
	{
		if (s1[ft_strlen(s1) - 1 - j] != *set)
			is_done = 2;
		j++;
	}
	new_str = allocate_and_populate_str(s1, i - 1, j - 1);
	return (new_str);
}
/*#include <stdio.h>
int main(void)
{
	char *x = "a**Buenas shavales**";
	printf("%s",ft_strtrim(x,"a"));
	return 0;
}*/
