/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:31:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 16:30:29 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "brainfuck.h"

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

	language = init_language();
	ptr = language;
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
			write(1, &(*ptr), 1);
		if (*code == '[' && *ptr == 0)
			go_to_matching_bracket_left(&code);
		else if (*code == ']' && *ptr != 0)
			go_to_matching_bracket_right(&code);
		code++;
	}
	free(language);
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
