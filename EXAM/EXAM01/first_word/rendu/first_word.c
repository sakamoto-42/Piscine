/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:13:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 10:28:37 by sakamoto-42      ###   ########.fr       */
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
		while (*str == 9 || *str == 32)
			str++;
		while ((*str != '\0') && (*str != 9 && *str != 32))
		{
			c = *str;
			write(1, &c, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
