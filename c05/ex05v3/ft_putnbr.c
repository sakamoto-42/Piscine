/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:34:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/13 10:28:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_numbers(int nb);
void	ft_write_number(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_write_numbers(nb);
}

void	ft_write_numbers(int nb)
{
	if (nb >= 10)
		ft_write_numbers(nb / 10);
	ft_write_number(nb % 10);
}

void	ft_write_number(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}
