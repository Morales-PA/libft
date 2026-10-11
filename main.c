/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:33:37 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/11 20:30:36 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	m;
	int	n;
	int	i;
	int	j;

	m = 5;
	n = 5;
	int(*a)[n] = malloc(m * n * sizeof(*a));
	a[0][2] = 1;
	i = 0;
	j = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			printf("%d", a[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
	}
	printf("%d", a[0][2]);
	free(a);
}
