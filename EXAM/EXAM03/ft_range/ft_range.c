/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:43:49 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 12:22:36 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_set_step_n_elem(int start, int end, int *step, int *n_elem);

int	*ft_range(int start, int end)
{
	int	step;
	int	n_elem;
	int	*range;
	int	i;

	ft_set_step_n_elem(start, end, &step, &n_elem);
	range = malloc(sizeof(int) * n_elem);
	if (range)
	{
		i = 0;
		while (i < n_elem)
		{
			range[i] = start;
			start += step;
			i++;
		}
	}
	return (range);
}

void	ft_set_step_n_elem(int start, int end, int *step, int *n_elem)
{
	if (start < end)
	{
		*step = 1;
		*n_elem = (end - start) + 1;
	}
	else if (start > end)
	{
		*step = -1;
		*n_elem = (start - end) + 1;
	}
	else
	{
		*step = 0;
		*n_elem = 1;
	}
}
