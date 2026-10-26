/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:52 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/24 18:40:50 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (((char *)little)[0] == '\0')
		return ((char *)big);
	while (i < len && ((char *)big)[i])
	{
		if (((char *)big)[i] == little[0])
		{
			j = 1;
			while (((char *)big)[i + j] == ((char *)little)[j] && little[j] && i
				+ j < len)
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s", ft_strnstr(argv[1], argv[2], 4));
	return (0);
}
*/