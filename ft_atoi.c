/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:41:17 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/20 19:16:34 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

static size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int converted_nptr;
	int nptr_len;
	int is_negative;
	int	i;

	converted_nptr = 0;
	nptr_len = ft_strlen(nptr);
	is_negative = false;
	i = 0;
	if (nptr[0] == '-')
	{
		is_negative = true;
		i = 1;
	}
	if (nptr_len == 1 || (nptr_len == 2 && is_negative))
	{
		if (is_negative)
			converted_nptr = nptr[1] - '0';
		else
			converted_nptr = nptr[0] - '0';
	}
	while (nptr[i] && ft_strlen(nptr) > 2)
	{
		converted_nptr = converted_nptr * 10 + (nptr[i] - '0');
		i++;
	}
	if (is_negative)
		converted_nptr *= -1;
	return (converted_nptr);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%d",ft_atoi(argv[1]));
	return 0;
}

