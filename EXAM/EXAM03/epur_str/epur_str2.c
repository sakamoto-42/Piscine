/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:51:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/03 17:07:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		is_word;
	int		is_first_char;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		is_word = 0;
		is_first_char = 1;
		while (*str != '\0')
		{
			if (*str != ' ' && *str != '\t')
			{
				if (!is_word && !is_first_char)
					write(1, " ", 1);
					is_word = 1;
				c = *str;
				write(1, &c, 1);
				is_first_char = 0;
			}
			else
				is_word = 0;
			str++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
