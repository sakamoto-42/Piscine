/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:20:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/14 21:45:49 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n);
void	ft_write_numbers(int n);
void	ft_print_comb1(void);
void	ft_print_comb2(void);
void	ft_print_comb3(void);

void	ft_print_combn(int n)
{
	if (n == 1)
	{
		ft_print_comb1(void);
	}
	if (n == 2)
	{
		ft_print_comb2(void);
	}
	if (n == 3)
	{
		ft_print_comb3(void);
	}
}

void	ft_print_comb1(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_write_numbers(i);
		if (!(i == 9))
			write(1, ", ", 2);
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	j;
	int	i;

	j = 0;
	while (j <= 8)
	{
		i = j + 1;
		while (i <= 9)
		{
			ft_write_numbers(j);
			ft_write_numbers(i);
			if (!(j == 8 && i == 9))
				write(1, ", ", 2);
			i++;
		}
		j++;
	}
}

void	ft_print_comb3(void)
{
	int	k;
	int	j;
	int	i;

	k = 0;
	while (k <= 7)
	{
		j = k + 1;
		while (j <= 8)
		{
			i = j + 1;
			while (i <= 9)
			{
				ft_write_numbers(k);
				ft_write_numbers(j);
				ft_write_numbers(i);
				if (!(k == 7 && j == 8 && i == 9))
					write(1, ", ", 2);
				i++;
			}
			j++;
		}
		k++;
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
	if (n >= 10)
		ft_write_numbers(n / 10);
	ft_write_number(n % 10);
}
