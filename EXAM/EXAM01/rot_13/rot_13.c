/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:39:03 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 11:34:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	int		base;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str != '\0')
		{
			base = 0;
			if (*str >= 65 && *str <= 90)
				base = 65;
			else if (*str >= 97 && *str <= 122)
				base = 97;
			if (base)
				c = (*str - base + 13) % 26 + base;
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
