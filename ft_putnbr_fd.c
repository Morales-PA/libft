/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:10:07 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/28 18:14:46 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nlong;

	nlong = n;
	if (nlong < 0)
	{
		ft_putchar_fd('-', fd);
		nlong = -nlong;
	}
	if (nlong / 10 != 0)
		ft_putnbr_fd(nlong / 10, fd);
	ft_putchar_fd(nlong % 10 + 48, fd);
}
