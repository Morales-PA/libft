/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:41:40 by juan              #+#    #+#             */
/*   Updated: 2026/10/21 19:26:45 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*temp_s;
	int				i;

	if (!s || !f || s[0] == '\0')
		return ((char *)s);
	temp_s = malloc(ft_strlen(s) + 1 * sizeof(*temp_s));
	if (temp_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp_s[i] = f(i, ((unsigned char *)s)[i]);
		i++;
	}
	return ((char *)temp_s);
}
