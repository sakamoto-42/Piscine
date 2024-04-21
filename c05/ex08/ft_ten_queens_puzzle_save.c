/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:09:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/20 18:00:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_init_board(int board[10][10]);
int		ft_place_queen(int board[10][10], int line, int can_place);
int		ft_check_cell(int line);
void	ft_print_board(int board[10][10]);

int	ft_ten_queens_puzzle(void)
{
	int		board[10][10];

	ft_init_board(board);
	ft_place_queen(board, 0, 0);
	ft_print_board(board);
	return (0);
}

int	ft_place_queen(int board[10][10], int line, int can_place)
{
	if (line > 9)
		return (0);
	can_place = ft_check_cell(line);
	if (can_place)
	{
		write(1, "1", 1);
		return (ft_place_queen(board, line + 1, can_place));
	}
	return (ft_place_queen(board, line + 1, can_place));
}

int	ft_check_cell(int line)
{
	return (line % 2 == 0);
}

void	ft_init_board(int board[10][10])
{
	int	line;
	int	column;

	line = 0;
	while (line <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			board[column][line] = 0;
			column++;
		}
		line++;
	}
}

void	ft_print_board(int board[10][10])
{
	int		line;
	int		column;
	char	c;

	line = 0;
	while (line <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			if (board[column][line] == 1)
				c = 'X';
			else
				c = 'O';
			write(1, &c, 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}

/*int	ft_place_queen()
{
	ft_check_cell();
}*/
