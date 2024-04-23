/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:08:15 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/20 09:14:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_find_next_prime.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	nb;
	int	res;

	nb = 6;
	res = ft_find_next_prime(nb);
	ft_putnbr(res);
	return (0);
}
