/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:08 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/17 16:28:00 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	fact = nb;
	nb = nb - 1;
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
