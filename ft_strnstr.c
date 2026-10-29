/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:52 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/29 14:55:24 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		i;
	size_t		j;

	b = big;
	l = little;
	i = 0;
	if (l[0] == '\0')
		return ((char *)b);
	while (i < len && b[i])
	{
		if (b[i] == l[0])
		{
			j = 1;
			while (b[i + j] == l[j] && l[j] && i + j < len)
				j++;
			if (j == ft_strlen(l))
				return ((char *)b + i);
		}
		i++;
	}
	return (NULL);
}
