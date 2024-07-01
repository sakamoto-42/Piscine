/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:41:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 13:11:27 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	unsigned int	bit_val;
	int				power;
	int				i;

	power = 7;
	while (power >= 0)
	{
		bit_val = 1;
		i = power;
		while (i > 0)
		{
			bit_val *= 2;
			i--;
		}
		if (bit_val <= octet)
		{
			write(1, "1", 1);
			octet -= bit_val;
		}
		else
			write(1, "0", 1);
		power--;
	}
}
