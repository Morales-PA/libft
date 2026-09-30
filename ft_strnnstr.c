/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:52 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/30 18:18:32 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	char	*little_tmp;
	char	*big_tmp;
	bool	is_little_found;
	size_t	i;
	size_t	j;

	little_tmp = little;
	big_tmp = big;
	is_little_found = false;
	i = 0;
	while (i < len - 1)
	{
		if (big_tmp[i] == little_tmp[i])
		{
			j = 1;
			is_little_found = true;
			while (j + i < len - 1 && is_little_found)
				if (big_tmp[i + j] != big_tmp[i + j])
					is_little_found = false;
		}
		i++;
	}
	if (!is_little_found)
		return (NULL);
	return (big_tmp + i);
}
