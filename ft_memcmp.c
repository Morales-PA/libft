/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:26:37 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/30 17:34:21 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;
	size_t			i;

	s1_temp = s1;
	s2_temp = s2;
	i = 0;
	while (s1_temp[i] && s2_temp[i] && s1_temp[i] == s2_temp[i] && i < n - 1)
		i++;
	return (s1_temp[i] - s2_temp[i]);
}
