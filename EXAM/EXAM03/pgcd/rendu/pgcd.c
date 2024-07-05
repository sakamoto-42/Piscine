/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:33:51 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 21:31:55 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	pgcd(unsigned int a, unsigned int b);
void			set_min_max(unsigned int *min, unsigned int *max,
					unsigned int a, unsigned int b);

int	main(int argc, char **argv)
{
	unsigned int	a;
	unsigned int	b;

	if (argc - 1 == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a > 0 && b > 0)
		{
			printf("%d", pgcd(a, b));
			printf("\n");
		}
	}
	else
		printf("\n");
	return (0);
}

unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	min;
	unsigned int	max;
	unsigned int	temp_min;

	if (a == b)
		return (a);
	else
		set_min_max(&min, &max, a, b);
	while (max % min != 0)
	{
		temp_min = min;
		min = max % min;
		max = temp_min;
	}
	return (min);
}

void	set_min_max(unsigned int *min, unsigned int *max,
			unsigned int a, unsigned int b)
{
	if (a < b)
	{
		*min = a;
		*max = b;
	}
	else if (a > b)
	{
		*min = b;
		*max = a;
	}
}
