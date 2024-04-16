/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:08 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/16 15:22:57 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int	fact;

	i = 1;
	fact = nb;
	while (i < nb)
	{
		fact = fact * (nb - i);
		i++;
	}
	return (fact);
}
