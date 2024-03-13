/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:07:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/13 20:34:20 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n);
void	ft_write_numbers(int n);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write_numbers(i);
			write(1, " ", 1);
			ft_write_numbers(j);
			write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

void	ft_write_number(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_write_numbers(int n)
{
	ft_write_number(n / 10);
	ft_write_number(n % 10);
}
