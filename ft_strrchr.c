/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:18:21 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/30 17:03:25 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr_to_return;
	int		latest_occ;
	int		str_len;

	str_len = sizeof(s);
	i = 0;
	latest_occ = str_len;
	while (s[i])
	{
		if (s[i] == c)
			if (latest_occ > str_len - i)
				latest_occ = str_len - i;
		i++;
	}
	if (s[i] == '\0')
		return (s + i);
	if (latest_occ != str_len)
		return (s + i);
	return (NULL);
}
