/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:56:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 10:08:04 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str != '\0')
		{
			i = 0;
			if (*str >= 65 && *str <= 90)
				i = *str - 65;
			else if (*str >= 97 && *str <= 122)
				i = *str - 97;
			while (i >= 0)
			{
				c = *str;
				write(1, &c, 1);
				i--;
			}
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
