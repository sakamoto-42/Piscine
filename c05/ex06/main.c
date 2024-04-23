/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:06:33 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/20 09:14:50 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_prime.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	nb;
	int	res;

	nb = 6;
	res = ft_is_prime(nb);
	ft_putnbr(res);
	return (0);
}
