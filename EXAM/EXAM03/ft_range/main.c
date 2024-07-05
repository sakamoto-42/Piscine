/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:22:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 12:34:37 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_range.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		start;
	int		end;
	int		*range;
	int		i;
	int		size;

	start = 0;
	end = -3;
	range = ft_range(start, end);
	if (range)
	{
		i = 0;
		size = 1;
		if (start < end)
			size = (end - start) + 1;
		else if (start > end)
			size = (start - end) + 1;
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}
		free(range);
	}
	return (0);
}
