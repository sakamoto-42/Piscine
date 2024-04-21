/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:18:48 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 17:57:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_arg(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_write_arg(argv[i]);
		i--;
	}
	return (0);
}

void	ft_write_arg(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}
