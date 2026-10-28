/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:12:14 by juan              #+#    #+#             */
/*   Updated: 2026/10/28 18:59:20 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_alloc(long n)
{
	size_t	size;

	size = 2;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	int		i;
	char	*res;
	long	nlong;

	nlong = n;
	size = size_alloc(nlong);
	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	if (nlong < 0)
	{
		res[0] = '-';
		nlong = -nlong;
	}
	res[size - 1] = '\0';
	i = size - 2;
	while (nlong / 10 != 0)
	{
		res[i] = nlong % 10 + 48;
		nlong /= 10;
		i--;
	}
	res[i] = nlong % 10 + 48;
	return (res);
}
