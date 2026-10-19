/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:33:37 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/16 14:31:00 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	rows;
	int	i;

	rows = 5;
	//int(*a)[n] = malloc(m * n * sizeof(*a));
	char **a = malloc(rows * sizeof(*a));
	a[0] = "Hola";
	a[1] = "Hola2";
	i = 0;
	while (a[i])
	{
		printf("%s", a[i]);
		i++;
	}
	free(a);
}
