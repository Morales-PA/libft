/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:12:14 by juan              #+#    #+#             */
/*   Updated: 2026/10/08 01:22:59 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		temp_n;
	int		str_len;
	char	*str_n;

	temp_n = n;
	str_len = 1;
	while (temp_n / 10)
	{
		temp_n /= 10;
		str_len++;
	}
	str_n = malloc(sizeof(char [str_len + 1]));
	if (!str_n)
		return (0);
	str_n[str_len + 1] = '\0';
	while (str_len > 0)
	{
		str_n[str_len - 1] = (n % 10) + '0';
		n /= 10;
		str_len--;
	}
	return (str_n);
}
