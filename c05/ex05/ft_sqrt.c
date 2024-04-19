/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 11:43:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"

int	ft_slice_nb(int nb);

int	ft_sqrt(int nb)
{
	ft_slice_nb(nb);
	return (nb);
}

int	ft_slice_nb(int nb)
{
	int	slice;

	if (nb % 100 == nb)
	{
		ft_putnbr(nb);
		write(1, "\n", 1);
		return (nb);
	}

	slice = nb % 100;
	ft_slice_nb(nb / 100);
	ft_putnbr(slice);
	write(1, "\n", 1);
	return (slice);
}
