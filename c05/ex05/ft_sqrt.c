/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:04:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/19 16:41:26 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_slice_nb(int nb, int *rest, int *sqrt, int *found);
void	ft_search_first_sqrt(int nb, int *sqrt);
void	ft_search_sqrt(int n, int dec, int *rest, int *sqrt);

int	ft_sqrt(int nb)
{
	int	perfect;
	int	sqrt;
	int	rest;

	perfect = 0;
	sqrt = 0;
	rest = 0;
	if (nb < 100)
	{
		ft_search_first_sqrt(nb, &sqrt);
		if (sqrt * sqrt == nb)
			return (sqrt);
		return (0);
	}
	ft_recursive_slice_nb(nb, &rest, &sqrt, &perfect);
	if (perfect)
		return (sqrt);
	return (0);
}

int	ft_recursive_slice_nb(int nb, int *rest, int *sqrt, int *perfect)
{
	int	slice;
	int	res;

	if (nb % 100 == nb)
	{
		ft_search_first_sqrt(nb, sqrt);
		*rest = nb - *sqrt * *sqrt;
		return (nb);
	}
	slice = nb % 100;
	ft_recursive_slice_nb(nb / 100, rest, sqrt, perfect);
	res = *rest * 100 + slice;
	ft_search_sqrt(res, *sqrt * 2, rest, sqrt);
	if (*rest == 0)
		*perfect = 1;
	return (slice);
}

void	ft_search_first_sqrt(int nb, int *sqrt)
{
	int	i;

	i = 0;
	while ((i <= 10) && (i * i <= nb))
		i++;
	*sqrt = (i - 1);
}

void	ft_search_sqrt(int n, int dec, int *rest, int *sqrt)
{
	int	i;

	i = 9;
	while (((dec * 10 + i) * i > n) && (i >= 0))
		i--;
	*sqrt = *sqrt * 10 + i;
	*rest = n - ((dec * 10 + i) * i);
}
