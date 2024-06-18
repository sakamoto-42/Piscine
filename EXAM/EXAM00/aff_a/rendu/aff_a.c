/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:00:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 21:26:05 by sakamoto-42      ###   ########.fr       */
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
			if (*str == 'a')
			{
				c = *str;
				write(1, &c, 1);
				write(1, "\n", 1);
				return (0);
			}
			str++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	return (0);
}
