/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:59:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/17 18:29:15 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_recursive_power.h"

int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 5;
	power = 4;
	res = ft_recursive_power(nb, power);
	ft_putnbr(res);
	return (0);
}
