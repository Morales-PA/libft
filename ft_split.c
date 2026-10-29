/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:24:46 by juan              #+#    #+#             */
/*   Updated: 2026/10/29 19:13:35 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_array(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**add_word(char **arr, int count, char const *s, int len)
{
	char	**new_arr;
	char	*word;
	int		i;

	word = ft_substr(s, 0, len);
	new_arr = malloc((count + 2) * sizeof(*new_arr));
	if (word == NULL || new_arr == NULL)
	{
		free(word);
		free(new_arr);
		free_array(arr, count);
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[count] = word;
	new_arr[count + 1] = NULL;
	free(arr);
	return (new_arr);
}

static char	**fill_array(char **arr, char const *s, char c)
{
	int	count;
	int	i;
	int	len;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = word_len(s + i, c);
			arr = add_word(arr, count, s + i, len);
			if (arr == NULL)
				return (NULL);
			count++;
			i += len;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = malloc(sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	arr[0] = NULL;
	return (fill_array(arr, s, c));
}
