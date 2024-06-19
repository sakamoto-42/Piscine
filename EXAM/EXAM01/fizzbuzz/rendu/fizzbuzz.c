/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:47:42 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 10:40:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int i)
{
	char	c;

	if (i / 10 != 0)
	{
		c = (i / 10) + '0';
		write(1, &c, 1);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
		}
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_numbers(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
