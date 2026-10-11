/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:43:35 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/11 20:49:46 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;

	temp = malloc(nmemb * size);
	if (!temp)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		temp[i] = 2;
		i++;
	}
	return (temp);
}

int	main(void)
{
	int	*test;
	int	i;

	test = ft_calloc(10, 4);
	i = 0;
	while (i < 10)
	{
		printf("%d", test[i]);
		i++;
	}
}
