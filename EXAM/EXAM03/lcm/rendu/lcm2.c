/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 21:38:34 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 22:11:13 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_hcf(unsigned int a, unsigned int b);
void			set_min_max(unsigned int a, unsigned int b,
					unsigned int *min, unsigned int *max);

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if (a == 0 || b == 0)
		return (0);
	lcm = (a * b) / ft_hcf(a, b);
	return (lcm);
}

unsigned int	ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int	min;
	unsigned int	max;
	unsigned int	temp_min;

	set_min_max(a, b, &min, &max);
	while (max % min != 0)
	{
		temp_min = min;
		min = max % min;
		max = temp_min;
	}
	return (min);
}

void	set_min_max(unsigned int a, unsigned int b,
			unsigned int *min, unsigned int *max)
{
	if (a < b)
	{
		*min = a;
		*max = b;
	}
	else
	{
		*min = b;
		*max = a;
	}
}
