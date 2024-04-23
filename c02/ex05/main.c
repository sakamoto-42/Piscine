/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:51:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/01 21:46:27 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.h"
#include "ft_putnbr.h"
#include <unistd.h>

int	main(void)
{
	int	is_uppercase;

	is_uppercase = ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	is_uppercase = ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	is_uppercase = ft_str_is_uppercase("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	is_uppercase = ft_str_is_uppercase("0123456789");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	is_uppercase = ft_str_is_uppercase("a0b1c2d3e4f5g6h7i8j9");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	is_uppercase = ft_str_is_uppercase("A0B1C2D3E4F5G6H7I8J9");
	ft_putnbr(is_uppercase);
	write(1, "\n", 1);
	return (0);
}
