/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:13:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/13 20:01:52 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n);
void	ft_write_numbers(int n);

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n <= 9)
	{
		ft_write_number(n);
	}
	else
	{
		ft_write_numbers(n);
	}
	write(1, "\n", 1);
}

void	ft_write_number(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_write_numbers(int n)
{
	if (n >= 10)
		ft_write_numbers(n / 10);
	ft_write_number(n % 10);
}
