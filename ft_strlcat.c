/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:29 by juan              #+#    #+#             */
/*   Updated: 2026/10/21 19:20:28 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if ((size - dst_len - 1) > 0)
	{
		i = 0;
		while (i + dst_len < size && dst[i] && src[i])
		{
			dst[i + dst_len] = src[i];
			i++;
		}
		dst[i + dst_len] = '\0';
	}
	return (src_len + dst_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "Ho";
	char	*s2;

	s2 = "Buenas";
	ft_strlcat(s1, s2, 4);
	printf("%s", s1);
}
*/