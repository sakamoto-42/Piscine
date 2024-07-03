/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:51:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/03 17:14:22 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		is_new_word;
	int		is_first_char;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		is_new_word = 0;
		is_first_char = 1;
		while (*str != '\0')
		{
			if (*str != ' ' && *str != '\t')
			{
				if (is_new_word && !is_first_char)
					write(1, " ", 1);
				c = *str;
				write(1, &c, 1);
				if (is_first_char)
					is_first_char = 0;
				is_new_word = 0;
			}
			else
				is_new_word = 1;
			str++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
