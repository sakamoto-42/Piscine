/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:46:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/26 20:28:11 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_i;

	i = 0;
	while (i < size - 1)
	{
		min_i = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_i])
				min_i = j;
			j++;
		}
		ft_swap(&tab[min_i], &tab[i]);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
