/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:29 by juan              #+#    #+#             */
/*   Updated: 2026/10/27 03:03:31 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);

	dst_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;

	src_len = ft_strlen(src);

	if (dst_len == size)
		return (size + src_len);

	i = 0;
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';

	return (dst_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "Hola";
	char	*s2;

	s2 = "Buenas";
	ft_strlcat(s1, s2, sizeof(s1));
	printf("%s", s1);
}
*/