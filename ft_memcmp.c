/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:26:37 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 03:02:12 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_temp;
	char	*s2_temp;
	size_t	i;

	s1_temp = (char *)s1;
	s2_temp = (char *)s2;
	i = 0;
	while (s1_temp[i] && s2_temp[i] && s1_temp[i] == s2_temp[i] && i < n - 1)
		i++;
	return (s1_temp[i] - s2_temp[i]);
}
