/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:08:13 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/29 19:47:56 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	sub_str = malloc(sizeof(char [len]));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		sub_str[i] = s[i + start];
		i++;
	}
	return (sub_str);
}
