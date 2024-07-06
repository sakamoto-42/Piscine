/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:31:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 14:45:28 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *code);

int	main(int argc, char **argv)
{
	char			*code;
	unsigned int	i;

	if (argc - 1 == 1)
	{
		code = argv[1];
		i = 0;
		while (code[i] != '\0')
			i++;
		if (i <= 4096)
			brainfuck(code);
	}
	else
		write(1, "\n", 1);
	return (0);
}

void	brainfuck(char *code)
{
	unsigned char	*language;
	unsigned char	*ptr;
	unsigned int	i;
	int				brack_nest;
	char			c;

	language = malloc(sizeof(unsigned char) * 2048);
	if (language)
	{
		i = 0;
		ptr = language;
		while (i < 2048)
		{
			language[i] = 0;
			i++;
		}
	}
	while (*code != '\0')
	{
		if (*code == '>')
			ptr++;
		else if (*code == '<')
			ptr--;
		else if (*code == '+')
			*ptr++;
		else if (*code == '-')
			*ptr--;
		else if (*code == '.')
		{
			c = *ptr;
			write(1, &c, 1);
		}
		else if (*code == '[')
		{
			if (*ptr == 0)
			{
				brack_nest = 0;
				while (*code != ']' && brack_nest == 0)
					code++;
				if (*code == '[')
				{
					brack_nest++;
					code++;
				}
				if (*code == ']' || brack_nest != 0)
				{
					brack_nest--;
					code++;
				}
				code--;
			}
		}
		else if (*code == ']')
		{
			if (*ptr != 0)
			{
				brack_nest = 0;
				while (*code != '[' && brack_nest == 0)
					code--;
				if (*code == ']')
				{
					brack_nest++;
					code--;
				}
				if (*code == '[' || brack_nest != 0)
				{
					brack_nest--;
					code--;
				}
				code++;
			}
		}
		code++;
	}
}
