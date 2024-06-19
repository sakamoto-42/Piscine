/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:37:08 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 12:40:10 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_swap.h"

void	ft_write_i_j(int i, int j)
{
	char	c;

	c = i + '0';
	write(1, "i : ", 4);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = j + '0';
	write(1, "j : ", 4);
	write(1, &c, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	int		i;
	int		j;

	i = 5;
	j = 9;
	write(1, "before swap : \n", 15);
	ft_write_i_j(i, j);
	ft_swap(&i, &j);
	write(1, "after swap : \n", 14);
	ft_write_i_j(i, j);
	return (0);
}
