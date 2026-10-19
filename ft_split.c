/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:24:46 by juan              #+#    #+#             */
/*   Updated: 2026/10/18 15:00:09 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**populate_array(int start, int end, char *s_ptr, int str_amount, char **str_array)
{
	char	**a;
	int		i;
	int		j;

	a = malloc(str_amount * sizeof(*a));
	i = 0;
	j = 0;
	if (str_array == 0)
	{
		while (start + i < end)
		{
			a[0][i] = s_ptr[start + i];
			i++; 
		}
	}
	else
	{
		while (str_array[i])
		{
			while (str_array[i][j])
			{
				a[i][j] = str_array[i][j];
				j++;
			}
			i++;
		}
		j = 0;
		while (start + j < end)
		{
			a[i][j] = s_ptr[start + j];
			j++;
		}
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
			while (1)
			{
				if (s[i + j] == c || s[i + j] == '\0')
					break ;
				j++;
			}
			i = i + j;
			str_amount += 1;
			str_array = populate_array(i, j, (char *)s, str_amount, str_array);
			if (!str_array)
				return	(0);
		}
		i++;
	}
	return (str_array);
}

int	main(void)
{
	char	x1[] = ",Hola,buenos,dias";
	char	**x;
	int		i;

	x = ft_split(x1, ',');
	i = 0;
	while (i < 5)
	{
		printf("%s", x[i]);
		i++;
	}
	return (0);
}
