/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:30:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/03 17:51:13 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc - 1 == 1)
	{
		str = argv[1];
		expand_str(str);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

void	expand_str(char *str)
{
	int		is_new_word;
	int		is_first_char;
	char	c;

	is_new_word = 0;
	is_first_char = 1;
	while (*str != '\0')
	{
		if (*str != ' ' && *str != '\t')
		{
			if (is_new_word && !is_first_char)
				write(1, "   ", 3);
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
}
