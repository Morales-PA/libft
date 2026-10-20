/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:43:35 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/20 16:32:15 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (0);
	temp = malloc(nmemb * size);
	if (!temp)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		temp[i] = '\0';
		i++;
	}
	return (temp);
}
