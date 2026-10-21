/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:41:17 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 02:58:05 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	accumulator;
	int	is_negative;
	int	i;

	accumulator = 0;
	is_negative = 0;
	i = 0;
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (((char *)nptr)[i])
	{
		accumulator = accumulator * 10 + (((char *)nptr)[i] - '0');
		i++;
	}
	if (is_negative)
		accumulator *= -1;
	return (accumulator);
}
/*#include <stdio.h>
int	main(int argc, char const *argv[])
{
	(void)argc;
	printf("%d", ft_atoi(argv[1]));
	return (0);
}*/
