/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:47:51 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 21:23:27 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str != '\0')
		{
			if (*str == 'z')
			{
				c = *str;
				write(1, &c, 1);
				write(1, "\n", 1);
				return (0);
			}
			str++;
		}
	}
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
