/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:15:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 17:21:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rrange.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	size;
	int	i;
	int	*range;

	start = 0;
	end = -3;
	range = ft_rrange(start, end);
	if (range)
	{
		size = 1;
		if (start < end)
			size = (end - start) + 1;
		else if (start > end)
			size = (start - end) + 1;
		i = 0;
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}
		free(range);
	}
	return (0);
}
