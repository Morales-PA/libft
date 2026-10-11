/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:43:35 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/04 19:23:28 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

static void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;
	size_t	i;

	temp = s;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}

void *calloc(size_t nmemb, size_t size)
{
	if (!nmemb || !size)
		return NULL;
	
}
