/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:10:07 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/21 03:27:01 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	temp_n;
	char	c2;

	temp_n = n;
	if (temp_n < 0)
	{
		temp_n *= -1;
		write(fd, "-", 1);
	}
	if (temp_n > 10)
		ft_putnbr_fd(temp_n / 10, fd);
	c2 = (temp_n % 10) + '0';
	write(fd, &c2, 1);
}
/*
int main()
{
	ft_putnbr_fd(420,1);
	return 0;
}
*/
