/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:53:15 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 10:38:32 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	str_capitalize(char *str);
int		ft_is_new_word(char *str);

int	main(int argc, char **argv)
{
	int		i;

	if (argc - 1 > 0)
	{
		i = 1;
		while (i < argc)
		{
			str_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

void	str_capitalize(char *str)
{
	int		is_first_char;
	int		is_new_word;
	char	c;

	is_first_char = 1;
	is_new_word = 1;
	while (*str != '\0')
	{
		c = *str;
		if (*str >= 'a' && *str <= 'z')
		{
			if (is_first_char || is_new_word)
				c = *str - 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (!is_first_char && !is_new_word)
				c = *str + 32;
		}
		is_new_word = ft_is_new_word(str);
		write(1, &c, 1);
		is_first_char = 0;
		str++;
	}
}

int	ft_is_new_word(char *str)
{
	int	is_new_word;

	if (*str == ' ' || *str == '\n')
		is_new_word = 1;
	else
		is_new_word = 0;
	return (is_new_word);
}
