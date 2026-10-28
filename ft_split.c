/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:24:46 by juan              #+#    #+#             */
/*   Updated: 2026/10/28 18:57:19 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**populate_array(int start, int end, char const *s_ptr,
		int str_amount, char **str_array)
{
	char	**a;
	int		i;
	int		j;

	a = malloc((str_amount + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < str_amount - 1)
	{
		a[i] = str_array[i];
		i++;
	}
	a[i] = malloc((end - start + 1) * sizeof(**a));
	if (a[i] == NULL)
	{
		free(a);
		return (NULL);
	}
	j = 0;
	while (j < end - start)
	{
		a[i][j] = s_ptr[start + j];
		j++;
	}
	a[i][j] = '\0';
	a[str_amount] = NULL;
	free(str_array);
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		str_amount;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	str_array = malloc(sizeof(*str_array));
	if (str_array == NULL)
		return (NULL);
	str_array[0] = NULL;
	str_amount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			str_array = populate_array(i, i + j, s,
					str_amount + 1, str_array);
			if (str_array == NULL)
				return (NULL);
			str_amount++;
			i += j;
		}
		else
			i++;
	}
	return (str_array);
}
