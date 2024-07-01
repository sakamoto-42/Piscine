/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:11:53 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 13:13:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "print_bits.h"

int	main(void)
{
	unsigned int	octet;

	octet = 164;
	print_bits(octet);
	return (0);
}
