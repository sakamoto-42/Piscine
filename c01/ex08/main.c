/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:54:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/01 16:47:17 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.h"
#include "ft_putnbr.h"
#include <unistd.h>

void	ft_fill_tab(int *tab);
void	ft_print_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;

	size = 10;
	ft_fill_tab(tab);
	ft_print_tab(tab, size);
	write(1, "\n", 1);
	ft_sort_int_tab(tab, size);
	ft_print_tab(tab, size);
	write(1, "\n", 1);
	return (0);
}

void	ft_fill_tab(int *tab)
{
	tab[0] = 3;
	tab[1] = 0;
	tab[2] = 6;
	tab[3] = 4;
	tab[4] = 1;
	tab[5] = 2;
	tab[6] = 0;
	tab[7] = 5;
	tab[8] = 42;
	tab[9] = 9;
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
}
