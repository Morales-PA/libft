/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:08:13 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/25 02:32:49 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_str;

	s_len = ft_strlen((char *)s) + 1;
	if (s_len > len)
		return (NULL);
	sub_str = malloc(s_len * sizeof(*sub_str));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < s_len && ((char *)s)[start + i])
	{
		sub_str[i] = ((char *)s)[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(int argc, char const **argv)
{
	(void)argc;
	(void)argv;
	//printf("%s", ft_substr(argv[1], atoi(argv[2]), (size_t)argv[3]));
	printf("%s",ft_substr("hola", 0, 18446744073709551615));
	return (0);
}*/

