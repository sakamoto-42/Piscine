/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:22:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 11:57:00 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str);
void			print_tab_mult(unsigned int nbr);
void			print_nbr(unsigned int nbr);

int	main(int argc, char **argv)
{
	int	nbr;

	if (argc - 1 == 1)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr > 0)
			print_tab_mult(nbr);
	}
	else
		write(1, "\n", 1);
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str != '\0')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr);
}

void	print_tab_mult(unsigned int nbr)
{
	unsigned int	mult;
	unsigned int	res;

	mult = 1;
	while (mult < 10)
	{
		print_nbr(mult);
		write(1, " x ", 3);
		print_nbr(nbr);
		write(1, " = ", 3);
		res = mult * nbr;
		print_nbr(res);
		write(1, "\n", 1);
		mult++;
	}
}

void	print_nbr(unsigned int nbr)
{
	char	c;

	if (nbr >= 10)
		print_nbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}
