/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:18:21 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/28 19:32:26 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *ptr_to_return;
	int latest_occ;
	int	str_len;

	str_len = ft_strlen(s);
	i = 0;
	latest_occ = str_len;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (latest_occ > str_len - i)
			{
				latest_occ = str_len - i;
			}
		}
		i++;
	}
	if (latest_occ != str_len)
		return (s + i);
	if (s[i] == '\0')
		return (s + i);
	return (NULL);
}
