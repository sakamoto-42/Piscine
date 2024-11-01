/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:20:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/17 20:39:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_recursive_combn(int *comb, int n, int pos, int prev);
void	ft_write_combn(int *comb, int n);
void	ft_write_number(int n);

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n >= 1 && n <= 10)
	{
		ft_recursive_combn(comb, n, 0, -1);
	}
}

void	ft_recursive_combn(int *comb, int n, int pos, int prev)
{
	int	i;

	if (pos == n)
	{
		ft_write_combn(comb, n);
		if (comb[0] < 10 - n)
			write(1, ", ", 2);
		return ;
	}
	i = prev + 1;
	while (i < 10)
	{
		comb[pos] = i;
		ft_recursive_combn(comb, n, pos + 1, i);
		i++;
	}
}

void	ft_write_combn(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_write_number(comb[i]);
		i++;
	}
}

void	ft_write_number(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}
