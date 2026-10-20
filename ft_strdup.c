/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 20:07:18 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/20 16:35:17 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strdup(const char *s)
{
	char	*s_temp;
	char	s_len;
	int		i;

	s_len = ft_strlen(s);
	s_temp = malloc(s_len * sizeof(*s_temp));
	if (!s_temp)
		return (0);
	i = 0;
	while (s[i])
	{
		s_temp[i] = s[i];
		i++;
	}
	return (s_temp);
}


