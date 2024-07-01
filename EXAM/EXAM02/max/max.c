/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 07:42:47 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 08:01:20 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int				max_nbr;
	unsigned int	i;

	if (len == 0)
		return (0);
	max_nbr = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > max_nbr)
			max_nbr = tab[i];
		i++;
	}
	return (max_nbr);
}
