/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:48:15 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/29 20:13:17 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr_to_return;

	i = 0;
	ptr_to_return = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (ptr_to_return + i);
		i++;
	}
	if (s[i] == '\0')
		return (ptr_to_return + i);
	return (NULL);
}
