/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:25:23 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/10 21:44:48 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_numbers(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = i + 48;
	b = j + 48;
	c = k + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_comb_numbers(i, j, k);
				if (i != 7 || j != 8 || k != 9)
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
