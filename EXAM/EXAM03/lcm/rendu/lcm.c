/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:58:15 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 18:26:39 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	res;
	unsigned int	mult_a;
	unsigned int	mult_b;

	mult_a = a;
	mult_b = b;
	while (mult_a != mult_b)
	{
		if (mult_a < mult_b)
			mult_a += a;
		else
			mult_b += b;
	}
	res = mult_a;
	return (res);
}
