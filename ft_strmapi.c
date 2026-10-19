/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:41:40 by juan              #+#    #+#             */
/*   Updated: 2026/10/19 16:15:31 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp_s;
	int		i;

	temp_s = malloc(ft_strlen(s) * sizeof(*temp_s));
	i = 0;
	while (s[i])
	{
		temp_s[i] = f(i, &s[i]);
		i++;
	}
	return (temp_s);
}
