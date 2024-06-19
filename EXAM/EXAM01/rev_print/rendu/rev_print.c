/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:13:12 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 13:05:47 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*str_start;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		str_start = str;
		while (*str != '\0')
			str++;
		str--;
		while (str >= str_start)
		{
			c = *str;
			write(1, &c, 1);
			str--;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
