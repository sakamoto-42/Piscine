/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:24:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/14 10:35:25 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_range.h"
#include "ft_putnbr.h"
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	length;

	min = 12;
	max = 42;
	tab = ft_range(min, max);
	if (tab == NULL)
		return (1);
	length = max - min;
	i = 0;
	while (i < length)
	{
		ft_putnbr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
	free(tab);
	tab = NULL;
	return (0);
}
