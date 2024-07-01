/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:44:08 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 18:50:49 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed_bits;
	int				i;

	reversed_bits = 0;
	i = 8;
	while (i > 0)
	{
		reversed_bits <<= 1;
		reversed_bits |= (octet & 1);
		octet >>= 1;
		i--;
	}
	return (reversed_bits);
}
