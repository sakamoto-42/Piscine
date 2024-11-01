/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:53:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 19:04:50 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.h"
#include <unistd.h>
#include "reverse_bits.h"

int	main(void)
{
	unsigned char	octet;
	unsigned char	reversed_octet;

	octet = 38;
	print_bits(octet);
	write(1, "\n", 1);
	reversed_octet = reverse_bits(octet);
	print_bits(reversed_octet);
	write(1, "\n", 1);
	return (0);
}
