/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:18:21 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 19:07:03 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	str_len;

	str_len = ft_strlen(s);
	i = str_len;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&((char *) s)[i]);
		i--;
	}
	return (NULL);
}
