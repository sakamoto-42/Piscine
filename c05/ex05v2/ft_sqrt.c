/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 17:02:55 by sakamoto-42      ###   ########.fr       */
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
	int				next_try;
	int				sqrt;

	if (low > high)
		return (-1);
	mid = low + (high - low) / 2;
	square = mid * mid;
	if (square == nb)
		return (mid);
	else if (square < nb)
	{
		next_try = sqrt_recursive(nb, mid + 1, high);
		if (next_try < 0)
			next_try = -1;
		return (next_try);
	}
	else
	{
		sqrt = sqrt_recursive(nb, low, mid - 1);
		return (sqrt);
	}
}
