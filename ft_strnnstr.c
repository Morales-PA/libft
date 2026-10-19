/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:52 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/19 18:29:58 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*strnstr(const char *big, const char *little, size_t len)
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
			j = 0;
			while (((char *)big)[i + j] == ((char *)little)[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*x;

	x = "Hola buenas tardes";
	printf("%s", strnstr(x, "paco", ft_strlen(x)));
}
