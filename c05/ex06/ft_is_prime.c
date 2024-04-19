/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:05:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 17:53:13 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_recursive_is_prime(int n, int sqrt, int i);

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	sqrt;

	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	is_prime = ft_recursive_is_prime(nb, sqrt, 2);
	return (is_prime);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while ((i * i) < nb)
		i++;
	return (i);
}

int	ft_recursive_is_prime(int n, int sqrt, int i)
{
	int	is_prime;

	if (i > sqrt)
		return (1);
	if (n % i == 0)
		return (0);
	is_prime = ft_recursive_is_prime(n, sqrt, i + 1);
	return (is_prime);
}
