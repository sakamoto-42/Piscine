/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:31:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 15:35:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void			brainfuck(char *code);
unsigned char	*init_language(void);
void			go_to_matching_bracket_left(char **code);
void			go_to_matching_bracket_right(char **code);

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
	unsigned char	*ptr;
	char			c;

	ptr = init_language();
	while (*code != '\0')
	{
		if (*code == '>')
			ptr++;
		else if (*code == '<')
			ptr--;
		else if (*code == '+')
			(*ptr)++;
		else if (*code == '-')
			(*ptr)--;
		else if (*code == '.')
		{
			c = *ptr;
			write(1, &c, 1);
		}
		if (*code == '[' && *ptr == 0)
			go_to_matching_bracket_left(&code);
		else if (*code == ']' && *ptr != 0)
			go_to_matching_bracket_right(&code);
		code++;
	}
}

unsigned char	*init_language(void)
{
	unsigned char	*language;
	unsigned int	i;

	language = malloc(sizeof(unsigned char) * 2048);
	if (language)
	{
		i = 0;
		while (i < 2048)
		{
			language[i] = 0;
			i++;
		}
	}
	return (language);
}

void	go_to_matching_bracket_left(char **code)
{
	int	brack_nest;

	brack_nest = 1;
	while (brack_nest != 0)
	{
		(*code)++;
		if (**code == '[')
			brack_nest++;
		else if (**code == ']')
			brack_nest--;
	}
}

void	go_to_matching_bracket_right(char **code)
{
	int	brack_nest;

	brack_nest = 1;
	while (brack_nest != 0)
	{
		(*code)--;
		if (**code == ']')
			brack_nest++;
		else if (**code == '[')
			brack_nest--;
	}
}
