/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:08:13 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/27 12:09:07 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub_str = malloc((len + 1) * sizeof(*sub_str));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len && ((char *)s)[start + i])
	{
		sub_str[i] = ((char *)s)[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	// printf("%s", ft_substr(argv[1], atoi(argv[2]), (size_t)argv[3]));
	printf("%s", ft_substr("hola", 4294967295, 0));
	return (0);
}*/
