/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:48:02 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/17 15:58:25 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_iterative_factorial.h"

int	main(void)
{
	int	nb;
	int	fact;

	nb = 5;
	fact = ft_iterative_factorial(nb);
	ft_putnbr(fact);
	return (0);
}
