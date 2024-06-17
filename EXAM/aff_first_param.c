/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:29:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/17 15:40:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	char	c;

	if (argc - 1 > 1)
	{
		str = argv[1];
		i = 0;
		while (str[i] != '\0')
		{
			c = str[i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else if (argc - 1 < 1)
		write(1, "\n", 1);
	return (0);
}
