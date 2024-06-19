/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:43:47 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 13:24:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	int		alpha;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str != '\0')
		{
			alpha = 0;
			if (*str >= 65 && *str <= 90)
				alpha = 65;
			else if (*str >= 97 && *str <= 122)
				alpha = 97;
			if (alpha)
				c = ((*str + 1 - alpha) % 26) + alpha;
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
