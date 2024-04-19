/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 15:10:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"
#include <stdio.h>

int		ft_slice_nb(int nb, int *rest, int *max_square, int *found);
void	ft_search_max_square(int nb, int *max_square);
void		ft_search_square(int n, int dec, int *rest, int *max_square);

int	ft_sqrt(int nb)
{
	int	max_square;
	int	rest;
	int	found;

	found = 0;
	max_square = 0;
	rest = 0;
	ft_slice_nb(nb, &rest, &max_square, &found);
	if (found)
		return (max_square);
	return (0);
}

int	ft_slice_nb(int nb, int *rest, int *max_square, int	*found)
{
	int	slice;
	int res;

	if (nb % 100 == nb)
	{
		ft_search_max_square(nb, max_square);
		*rest = nb - *max_square * *max_square;
		return (nb);
	}
	slice = nb % 100;
	ft_slice_nb(nb / 100, rest, max_square, found);
	res = *rest * 100 + slice;
	ft_search_square(res, *max_square * 2, rest, max_square);
	if (*rest == 0)
		*found = 1;
	return (slice);
}

void	ft_search_max_square(int nb, int *max_square)
{
	int i;

	i = 0;
	while ((i <= 10) && (i * i < nb))
			i++;
	*max_square = (i - 1);
}

void	ft_search_square(int n, int dec, int *rest, int *max_square)
{
	int	i;

	i = 9;
	while (((dec * 10 + i) * i > n) && (i >= 0))
		i--;
	*max_square = *max_square * 10 + i;
	*rest = n - ((dec * 10 + i) * i);
}
