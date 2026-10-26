/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:12:14 by juan              #+#    #+#             */
/*   Updated: 2026/10/26 19:40:26 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	temp_n;
	int		str_len;
	char	*str_n;

	str_len = 1;
	temp_n = n;
	while (temp_n / 10)
	{
		temp_n /= 10;
		str_len++;
	}
	str_n = malloc((str_len + 1) * sizeof(*str_n));
	if (!str_n)
		return (0);
	str_n[str_len] = '\0';
	while (str_len > 0)
	{
		str_n[str_len - 1] = (n % 10) + '0';
		n /= 10;
		str_len--;
	}
	return (str_n);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(1000034));
}
*/
