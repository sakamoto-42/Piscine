/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:45:21 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/26 14:26:14 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_int_tab.h"
#include "ft_putnbr.h"
#include <unistd.h>

void	ft_fill_tab(int *tab, int size);
void	ft_print_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;

	size = 10;
	ft_fill_tab(tab, size);
	ft_print_tab(tab, size);
	write(1, "\n", 1);
	ft_rev_int_tab(tab, size);
	ft_print_tab(tab, size);
	write(1, "\n", 1);
	return (0);
}

void	ft_fill_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}
