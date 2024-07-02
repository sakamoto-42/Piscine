/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 07:48:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/02 10:46:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_atoi(char *str);
unsigned int	ft_check_prime(unsigned int nb);
void			ft_print_nbr(unsigned int nbr);

int	main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	nb;
	unsigned int	prime_sum;

	if (argc - 1 == 1)
	{
		i = ft_atoi(argv[1]);
		nb = 2;
		prime_sum = 0;
		while (nb <= i)
		{
			if (ft_check_prime(nb))
				prime_sum += nb;
			nb++;
		}
		ft_print_nbr(prime_sum);
	}
	else
		write(1, "0", 1);
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i);
}

unsigned int	ft_check_prime(unsigned int nb)
{
	unsigned int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_nbr(unsigned int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_print_nbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
