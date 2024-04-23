/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:51:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/01 20:45:00 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.h"
#include "ft_putnbr.h"
#include <unistd.h>

int	main(void)
{
	int	is_numeric;

	is_numeric = ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz");
	ft_putnbr(is_numeric);
	write(1, "\n", 1);
	is_numeric = ft_str_is_numeric("0123456789");
	ft_putnbr(is_numeric);
	write(1, "\n", 1);
	is_numeric = ft_str_is_numeric("a0b1c2d3e4f5g6h7i8j9");
	ft_putnbr(is_numeric);
	write(1, "\n", 1);
	return (0);
}
