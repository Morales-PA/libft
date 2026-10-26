/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:51:47 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/26 00:59:07 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	size_t		i;

	new_str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(*new_str));
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
		new_str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s",ft_strjoin("abcd","efghi"));
}
*/
