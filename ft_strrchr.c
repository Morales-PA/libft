/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:18:21 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 03:00:40 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	latest_occ;
	int	str_len;

	str_len = ft_strlen(s);
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
		return ((char *)s + i);
	return (0);
}
