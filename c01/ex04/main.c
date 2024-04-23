/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:38:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/30 16:14:23 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include <unistd.h>
#include "ft_ultimate_div_mod.h"

int	main(void)
{
	int	i;
	int	j;

	i = 14;
	j = 8;
	ft_putnbr(i);
	write(1, " ", 1);
	ft_putnbr(j);
	ft_ultimate_div_mod(&i, &j);
	write(1, "\n", 1);
	ft_putnbr(i);
	write(1, " ", 1);
	ft_putnbr(j);
	write(1, "\n", 1);
	return (0);
}
