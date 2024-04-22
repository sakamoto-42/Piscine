/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:23:49 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/22 21:36:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	length = max - min;
	tab = malloc(sizeof(*tab) * length);
	if (tab)
	{
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (NULL);
}
