/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:51:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/01 21:25:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_lowercase.h"
#include "ft_putnbr.h"
#include <unistd.h>

int	main(void)
{
	int	is_lowercase;

	is_lowercase = ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	is_lowercase = ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	is_lowercase = ft_str_is_lowercase("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	is_lowercase = ft_str_is_lowercase("0123456789");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	is_lowercase = ft_str_is_lowercase("a0b1c2d3e4f5g6h7i8j9");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	is_lowercase = ft_str_is_lowercase("A0B1C2D3E4F5G6H7I8J9");
	ft_putnbr(is_lowercase);
	write(1, "\n", 1);
	return (0);
}
