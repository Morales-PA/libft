/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:22:14 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/11 20:29:42 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp_s;
	size_t	i;

	tmp_s = (char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == c)
			return (tmp_s + i);
		i++;
	}
	return (NULL);
}
