/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:24:46 by juan              #+#    #+#             */
/*   Updated: 2026/10/11 16:24:14 by jmorales         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	s_temp;

	s_temp = ft_strlen(s);
}

#include <stdio.h>
int	main(int argc, char const *argv[])
{
	char	x1[] = "Hola,buenos,dias";
	char	**x;
	int		i;
	int		j;

	x = ft_split(x1, ',');
	i = 0;
	j = 0;
	while (x[i])
	{
		j = 0;
		while (x[i][j])
		{
			printf("%s", x[i][j]);
			j++;
		}
		printf("%s", '\n');
		i++;
	}
	return (0);
}
