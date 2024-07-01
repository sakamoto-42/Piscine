/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:42:39 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 07:47:54 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*get_last_word(char *str);
void	print_last_word(char *last_word);

int	main(int argc, char **argv)
{
	char	*str;
	char	*last_word;

	if (argc - 1 == 1)
	{
		str = argv[1];
		last_word = get_last_word(str);
		if (last_word)
			print_last_word(last_word);
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

char	*get_last_word(char *str)
{
	int		is_word;
	char	*last_word;

	is_word = 0;
	last_word = NULL;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
			is_word = 0;
		else
		{
			if (!is_word)
			{
				last_word = str;
				is_word = 1;
			}
		}
		str++;
	}
	return (last_word);
}

void	print_last_word(char *last_word)
{
	char	c;

	while (*last_word != ' ' && *last_word != '\t' && *last_word != '\0')
	{
		c = *last_word;
		write(1, &c, 1);
		last_word++;
	}
}
