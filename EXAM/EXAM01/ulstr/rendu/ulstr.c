/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:00:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 14:05:32 by sakamoto-42      ###   ########.fr       */
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
			c = *str;
			if (*str >= 65 && *str <= 90)
				c = *str + 32;
			else if (*str >= 97 && *str <= 122)
				c = *str - 32;
			write(1, &c, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
