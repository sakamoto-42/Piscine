/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:01:57 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/18 20:09:02 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_fibonacci.h"

int	main(void)
{
	int	index;
	int	res;

	index = 5;
	res = ft_fibonacci(index);
	ft_putnbr(res);
	return (0);
}
