/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:20:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/13 22:08:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n);
void	ft_write_numbers(int n);

void	ft_print_combn(int n)
{
	int	i;

	if (n == 1)
	{
		i = 0;
		while (i <= 9)
		{
			ft_write_number(i);
			if (!(i == 9))
				write(1, ", ", 2);
			i++;
		}
	}
	write(1, "\n", 1);
	if (n == 2)
	{
		i = 0;
		while (i <= 99)
		{
			ft_write_numbers(i);
			if (!(i == 99))
				write(1, ", ", 2);
			i++;
		}
	}
}

void	ft_write_number(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void ft_write_numbers(int n)
{
	ft_write_number(n / 10);
	ft_write_number(n % 10);
}
