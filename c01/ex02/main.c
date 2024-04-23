/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:55:40 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/30 15:35:07 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_swap.h"
#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	ft_putnbr(i);
	write(1, " ", 1);
	ft_putnbr(j);
	write(1, "\n", 1);
	ft_swap(&i, &j);
	ft_putnbr(i);
	write(1, " ", 1);
	ft_putnbr(j);
	write(1, "\n", 1);
	return (0);
}
