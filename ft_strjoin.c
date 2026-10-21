/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:51:47 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 03:24:09 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	size_t		new_str_len;
	size_t		i;

	new_str_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(sizeof(char [new_str_len]));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		new_str[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "Hola ";
	char *s2 = "Buenas";
	printf("%s",ft_strjoin(s1,s2));
}
*/
