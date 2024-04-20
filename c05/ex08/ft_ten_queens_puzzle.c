/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:09:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/20 11:18:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ten_queens_puzzle(void)
{
	int		board[10][10];
	int		column;
	int		line;
	int		column_to_check;
	int		line_to_check;
	char	c;

	// init board
	line = 0;
	while (line <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			board[column][line] = 0;
			c = 'O';
			write(1, &c, 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
	write(1, "\n", 1);

	// check
	// begin : 0 0
	column_to_check = 0;
	line_to_check = 0;
	column = 0;
	line = 0;
	// if empty
	if (board[column][line] == 0)
	{
		// check if line is empty
		while (board[column][line] == 0 && column <= 9)
			column++;
		// if line without queen
		if (column == 9)
		{
			column = 0;
			line = 0;
			// check column
			while (board[column][line] == 0 && line <= 9)
				line++;
			// if column without queen
			if (line == 9)
			{
				column = 0;
				line = 0;
				// check diagonal
				while (board[column][line] == 0 || (column <= 9 || line <= 9))
				{
					column++;
					line++;
				}
				if (column == 9 || line == 9)
					board[column_to_check][line_to_check] = 1;
			}
		}
	}

	// write board
	line = 0;
	while (line <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			if (board[column][line] == 0)
				c = 'O';
			else
				c = 'X';
			write(1, &c, 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}

	return (board[0][0]);
}
