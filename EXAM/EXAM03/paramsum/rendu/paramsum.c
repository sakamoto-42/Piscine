/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:35:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 20:02:11 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive_write_nb(int nb);

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc - 1 >= 0)
	{
		ft_recursive_write_nb(argc - 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}

void	ft_recursive_write_nb(int nb)
{
	if (nb >= 10)
		ft_recursive_write_nb(nb / 10);
	nb = (nb % 10) + '0';
	write(1, &nb, 1);
}
