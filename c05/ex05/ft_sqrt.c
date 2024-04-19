/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 13:20:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"
#include <stdio.h>

int	ft_slice_nb(int nb);
int	ft_search_max_square(int nb);

int	ft_sqrt(int nb)
{
	ft_slice_nb(nb);

	return (nb);
}

int	ft_slice_nb(int nb)
{
	int	slice;
	int max_square;
	int	rest;

	if (nb % 100 == nb)
	{
		max_square = ft_search_max_square(nb);
		rest = nb - max_square;
		return (nb);
	}
	slice = nb % 100;
	ft_slice_nb(nb / 100);
	max_square = ft_search_max_square(nb);
	return (slice);
}

int	ft_search_max_square(int nb)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		if (i * i > nb)
			return ((i - 1) * (i - 1));
		i++;
	}
	return (0);
}
