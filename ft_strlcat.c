/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:29 by juan              #+#    #+#             */
/*   Updated: 2026/10/29 17:20:48 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (((char *)src)[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = ((char *)src)[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
