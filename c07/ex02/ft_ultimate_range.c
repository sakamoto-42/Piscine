/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:25:58 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/23 20:27:03 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	tab = malloc(sizeof(*tab) * length);
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (length);
}
