/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:45:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 09:33:58 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_atoi(char *a_base_10);
void			ft_base_10_to_16(unsigned int i_base_10);
void			ft_print_hex(int i_base_10);

int	main(int argc, char **argv)
{
	unsigned int	i_base_10;

	if (argc - 1 == 1)
	{
		i_base_10 = ft_atoi(argv[1]);
		ft_base_10_to_16(i_base_10);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

unsigned int	ft_atoi(char *a_base_10)
{
	unsigned int	i_base_10;

	i_base_10 = 0;
	while (*a_base_10 != '\0')
	{
		i_base_10 = i_base_10 * 10 + (*a_base_10 - '0');
		a_base_10++;
	}
	return (i_base_10);
}

void	ft_base_10_to_16(unsigned int i_base_10)
{
	if (i_base_10 / 16 != 0)
		ft_base_10_to_16(i_base_10 / 16);
	ft_print_hex(i_base_10 % 16);
}

void	ft_print_hex(int i_base_10)
{
	char	*hex_dict;
	int		i;

	hex_dict = "0123456789abcdef";
	i = 0;
	while (i_base_10 != i && hex_dict[i] != '\0')
		i++;
	if (i_base_10 == i)
		write(1, &hex_dict[i], 1);
}
