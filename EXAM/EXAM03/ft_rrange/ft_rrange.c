/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:04:50 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 17:14:35 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_set_step_size(int start, int end, int *step, int *size);

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	step;
	int	size;
	int	i;

	ft_set_step_size(start, end, &step, &size);
	range = malloc(sizeof(int) * size);
	if (range)
	{
		i = 0;
		while (i < size)
		{
			range[i] = end;
			end += step;
			i++;
		}
	}
	return (range);
}

void	ft_set_step_size(int start, int end, int *step, int *size)
{
	*size = 1;
	if (start < end)
	{
		*step = -1;
		*size = (end - start) + 1;
	}
	else if (start > end)
	{
		*step = 1;
		*size = (start - end) + 1;
	}
}
