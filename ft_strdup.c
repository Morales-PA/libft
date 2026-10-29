/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 20:07:18 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/29 14:08:09 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_temp;
	int		i;

	s_temp = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s_temp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_temp[i] = s[i];
		i++;
	}
	s_temp[i] = '\0';
	return (s_temp);
}
