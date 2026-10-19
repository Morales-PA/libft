/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:25:34 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/19 19:28:22 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char **a = malloc(10 * sizeof(*a));
	a[0] = "Hola";
	a[1] = "Hola1";
	int i = 0;
	while (a[i])
	{
		printf("%s",a[i]);
		i++;
	}
	
}
