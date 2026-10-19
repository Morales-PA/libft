/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:24:46 by juan              #+#    #+#             */
/*   Updated: 2026/10/19 19:43:27 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**populate_array(int start, int end, char *s_ptr, int str_amount,
		char **str_array)
{
	char	**a;
	int		i;
	int		j;

	a = malloc(str_amount * sizeof(*a));
	i = 0;
	a[i] = malloc((end - start) * sizeof(*a));
	j = 0;
	while (j < (end - start))
	{
		a[i][j] = s_ptr[start + j];
		j++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		str_amount;
	int		i;
	int		j;

	str_array = 0;
	str_amount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 1;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			str_array = populate_array(i, i + j, (char *)s, str_amount++,
					str_array);
			if (str_array == 0)
				return (0);
			i = i + j;
		}
		i++;
	}
	return (str_array);
}

int	main(void)
{
	char	x1[] = ",,d,buenos,dias";
	char	**x;
	int		i;

	x = ft_split(x1, ',');
	i = 0;
	while (x[i])
	{
		printf("%s", x[i]);
		printf("%c", '\n');
		i++;
	}
	return (0);
}
