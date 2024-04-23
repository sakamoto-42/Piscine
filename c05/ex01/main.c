/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:50:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 18:04:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_recursive_factorial.h"

int	main(void)
{
	int	nb;
	int	fact;

	nb = 5;
	fact = ft_recursive_factorial(nb);
	ft_putnbr(fact);
	return (0);
}
