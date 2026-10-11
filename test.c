/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:08:37 by jmorales          #+#    #+#             */
/*   Updated: 2026/10/11 20:30:22 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char const *argv[])
{
	int		m;
	int		n;
	double	**arr2d;

	m = 2;
	n = 5;
	arr2d = malloc(m * sizeof *arr2d);
	arr2d[0] = malloc(m * n * sizeof *arr2d[0]);
	for (int i = 1; i < m; i++)
	{
		arr2d[i] = &(arr2d[0][i * n]);
	}
	return (0);
}
