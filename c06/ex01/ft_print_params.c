/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:18:30 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/12 19:09:55 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_argv(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_write_argv(argv[i]);
		i++;
	}
	return (0);
}

void	ft_write_argv(char *str)
{
	while (*str != '\0')
	write(1, str++, 1);
		write(1, "\n", 1);
}
