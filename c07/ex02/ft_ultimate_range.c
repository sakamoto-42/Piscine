/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:25:58 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/14 14:04:26 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = (int *)malloc(length * sizeof(**range));
	if (*range)
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (length);
	}
	return (-1);
}
