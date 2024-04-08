/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:18:20 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/08 22:34:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_handle_non_printable_char(char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_handle_non_printable_char(str[i]);
		i++;
	}
}

void	ft_handle_non_printable_char(char c)
{
	int	d;
	int	u;

	write(1, "\\", 1);
	d = c / 16 + 48;
	write(1, &d, 1);
	if (c % 16 <= 9)
	{
		u = c % 16 + 48;
		write(1, &u, 1);
	}
	else if (c % 16 > 9)
	{
		u = c % 16 % 10 + 97;
		write(1, &u, 1);
	}
}
