/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:35:53 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/30 15:56:07 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.h"
#include "ft_putnbr.h"
#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;
	int	d;
	int	m;

	i = 14;
	j = 8;
	ft_div_mod(i, j, &d, &m);
	ft_putnbr(i);
	write(1, " ", 1);
	ft_putnbr(j);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, " ", 1);
	ft_putnbr(m);
	write(1, "\n", 1);
	return (0);
}
