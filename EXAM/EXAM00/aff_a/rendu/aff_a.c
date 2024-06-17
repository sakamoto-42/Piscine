/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:00:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/17 15:35:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	char	c;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == 'a')
			{
				c = str[i];
				write(1, &c, 1);
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
