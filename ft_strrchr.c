/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:18:21 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/19 17:00:44 by jmorales         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		latest_occ;
	int		str_len;

	str_len = ft(s);
	i = 0;
	latest_occ = str_len;
	while (s[i])
	{
		if (s[i] == c)
			if (latest_occ > str_len - i)
				latest_occ = str_len - i;
		i++;
	}
	if (latest_occ != str_len || (s[i] == '\0' && c == '\0'))
		return (s + i);
	return (0);
}
