/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:21:22 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 12:29:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"
#include <unistd.h>

void	ft_print_nbr(int i)
{
	char	c;

	if (i / 10 != 0)
		ft_print_nbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char	*str;
	int		i;

	str = "Hello, World !";
	i = ft_strlen(str);
	ft_print_nbr(i);
	write(1, "\n", 1);
	return (0);
}
