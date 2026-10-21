/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:41:40 by juan              #+#    #+#             */
/*   Updated: 2026/10/21 03:29:02 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp_s;
	int		i;

	temp_s = malloc(ft_strlen(s) * sizeof(*temp_s));
	i = 0;
	while (s[i])
	{
		temp_s[i] = f(i, ((char *)s)[i]);
		i++;
	}
	return (temp_s);
}
