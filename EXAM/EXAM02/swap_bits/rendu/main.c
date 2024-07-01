/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:51:54 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 19:03:45 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.h"
#include "swap_bits.h"
#include <unistd.h>

int	main(void)
{
	unsigned char	octet;
	unsigned char	swapped_octet;

	octet = 65;
	print_bits(octet);
	write(1, "\n", 1);
	swapped_octet = swap_bits(octet);
	print_bits(swapped_octet);
	write(1, "\n", 1);
	return (0);
}
