/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:41:40 by juan              #+#    #+#             */
/*   Updated: 2026/10/28 18:25:04 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*temp_s;
	int				i;

	if (!s || !f)
		return (NULL);
	temp_s = malloc((ft_strlen(s) + 1) * sizeof(*temp_s));
	if (!temp_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp_s[i] = f(i, ((unsigned char *)s)[i]);
		i++;
	}
	temp_s[ft_strlen(s)] = '\0';
	return ((char *)temp_s);
}
