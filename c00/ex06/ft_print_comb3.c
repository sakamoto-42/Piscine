/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:07:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/12 22:22:25 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_numbers(int a, int b, int c, int d);
void	ft_write_number(int n);

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			k = i;
			l = j + 1;
			while (k <= 9)
			{
				while (l <= 9)
				{
					ft_write_numbers(i, j, k, l);
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_write_numbers(int a, int b, int c, int d)
{
	ft_write_number(a);
	ft_write_number(b);
	write(1, " ", 1);
	ft_write_number(c);
	ft_write_number(d);
	write(1, "\n", 1);
}

void	ft_write_number(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}
