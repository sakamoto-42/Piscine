/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:27:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/14 14:10:54 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_range.h"
#include "ft_putnbr.h"
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;
	int	range_length;

	range = NULL;
	min = 12;
	max = 42;
	range_length = ft_ultimate_range(&range, min, max);
	i = 0;
	if (range_length != -1 || range_length != -0 || range == NULL)
		return (1);
	while (i < range_length)
	{
		ft_putnbr(range[i]);
		write(1, "\n", 1);
		i++;
	}
	free(range);
	range = NULL;
	return (0);
}
