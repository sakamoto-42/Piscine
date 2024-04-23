/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:51:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:35:35 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.h"
#include "ft_putnbr.h"
#include <unistd.h>

int	main(void)
{
	int		is_printable;
	char	str1[32];
	char	str2[2];
	char	str3[3];
	int		i;

	i = 1;
	while (i < 32)
	{
		str1[i - 1] = i;
		i++;
	}
	str1[i] = '\0';
	str2[0] = 127;
	str2[1] = '\0';
	str3[0] = 31;
	str3[1] = 32;
	str3[2] = '\0';
	is_printable = ft_str_is_printable("abcdefghijklmnopqrstuvwxyz");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("0123456789");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("a0b1c2d3e4f5g6h7i8j9");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("A0B1C2D3E4F5G6H7I8J9");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable(str1);
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable(str2);
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable(str3);
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	return (0);
}
