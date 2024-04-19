/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 16:20:42 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_slice_nb(int nb, int *rest, int *square, int *found);
void	ft_search_first_square(int nb, int *square);
void	ft_search_square(int n, int dec, int *rest, int *square);

int	ft_sqrt(int nb)
{
	int	perfect;
	int	square;
	int	rest;

	perfect = 0;
	square = 0;
	rest = 0;
	if (nb < 100)
	{
		ft_search_first_square(nb, &square);
		if (square * square == nb)
			return (square);
		return (0);
	}
	ft_slice_nb(nb, &rest, &square, &perfect);
	if (perfect)
		return (square);
	return (0);
}

int	ft_slice_nb(int nb, int *rest, int *square, int	*perfect)
{
	int	slice;
	int	res;

	if (nb % 100 == nb)
	{
		ft_search_first_square(nb, square);
		*rest = nb - *square * *square;
		return (nb);
	}
	slice = nb % 100;
	ft_slice_nb(nb / 100, rest, square, perfect);
	res = *rest * 100 + slice;
	ft_search_square(res, *square * 2, rest, square);
	if (*rest == 0)
		*perfect = 1;
	return (slice);
}

void	ft_search_first_square(int nb, int *square)
{
	int	i;

	i = 0;
	while ((i <= 10) && (i * i <= nb))
		i++;
	*square = (i - 1);
}

void	ft_search_square(int n, int dec, int *rest, int *square)
{
	int	i;

	i = 9;
	while (((dec * 10 + i) * i > n) && (i >= 0))
		i--;
	*square = *square * 10 + i;
	*rest = n - ((dec * 10 + i) * i);
}
