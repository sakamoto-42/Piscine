/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:19:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/16 15:15:42 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include "ft_putstr_non_printable.h"
#include <unistd.h>

void	ft_print(int min, int max);

int	main(void)
{
	char	str[21];

	ft_strcpy(str, "Coucou\ntu vas bien ?");
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_print(1, 31);
	ft_print(32, 126);
	ft_print(127, 255);
	return (0);
}

void	ft_print(int min, int max)
{
	char	str[150];
	int		i;
	int		j;

	i = 0;
	j = min;
	while (j <= max)
	{
		str[i] = j;
		i++;
		j++;
	}
	str[i] = '\0';
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}
