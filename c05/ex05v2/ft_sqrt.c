/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 17:14:01 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_recursive(int nb, int low, int high);

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	sqrt = sqrt_recursive(nb, 1, nb / 2);
	return (sqrt);
}

int	sqrt_recursive(int nb, int low, int high)
{
	long long int	mid;
	long long int	square;
	int				sqrt;

	if (low > high)
		return (0);
	mid = low + (high - low) / 2;
	square = mid * mid;
	if (square == nb)
		return (mid);
	else if (square < nb)
	{
		sqrt = sqrt_recursive(nb, mid + 1, high);
		return (sqrt);
	}
	else
	{
		sqrt = sqrt_recursive(nb, low, mid - 1);
		return (sqrt);
	}
}
