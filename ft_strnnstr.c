/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:52 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/20 17:03:14 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (((char *)little)[0] == '\0')
		return ((char *)big);
	while (i < len && ((char *)big)[i])
	{
		if (((char *)big)[i] == little[0])
		{
			j = 1;
			while (((char *)big)[i + j] == ((char *)little)[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
