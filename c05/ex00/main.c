/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:48:02 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/12 08:05:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"
#include "ft_iterative_factorial.h"

int	main(void)
{
	int	nb;
	int	fact;

	nb = 5;
	fact = ft_iterative_factorial(nb);
	ft_putnbr(fact);
	write(1, "\n", 1);
	return (0);
}
