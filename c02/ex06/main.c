/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:51:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/16 15:44:37 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.h"
#include "ft_putnbr.h"
#include <unistd.h>

void	ft_test_non_printable(int min, int max);

int	main(void)
{
	int		is_printable;

	ft_test_non_printable(1, 32);
	ft_test_non_printable(127, 127);
	ft_test_non_printable(31, 32);
	is_printable = ft_str_is_printable("abcdefghijklmnopqrstuvwxyz");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ft_putnbr(is_printable);
	write(1, "\n", 1);
	is_printable = ft_str_is_printable(
			"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ");
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
	return (0);
}

void	ft_test_non_printable(int min, int max)
{
	char	str[50];
	int		i;
	int		j;
	int		is_printable;

	i = 0;
	j = min;
	while (j <= max)
	{
		str[i] = j;
		i++;
		j++;
	}
	str[i] = '\0';
	is_printable = ft_str_is_printable(str);
	ft_putnbr(is_printable);
	write(1, "\n", 1);
}
