/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:13:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/17 20:38:30 by sakamoto-42      ###   ########.fr       */
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
		i = 0;
		while (str[i] == 9 || str[i] == 32)
			i++;
		while (str[i] != 9 && str[i] != 32 && str[i] != '\0')
		{
			c = str[i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
