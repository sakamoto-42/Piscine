/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:46:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 13:29:06 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_board(int board[10][10]);
int		ft_place_queens(int board[10][10], int cell_row);
int		ft_place_queen(int board[10][10], int cell_row, int cell_col);
int		ft_can_place_queen(int board[10][10], int row, int col);
void	ft_print_board(int board[10][10]);

int	main()
{
	int	board[10][10];

	ft_init_board(board);
	ft_place_queens(board, 0);
	ft_print_board(board);
	return (0);
}

void	ft_init_board(int board[10][10])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			board[col][row] = 0;
			col++;
		}
		row++;
	}
}

int	ft_place_queens(int board[10][10], int cell_row)
{
	if (cell_row > 9)
		return (1);
	if (!(ft_place_queen(board, cell_row, 0)))
		return (0);
	return (ft_place_queens(board, cell_row + 1));
}

int	ft_place_queen(int board[10][10], int cell_row, int cell_col)
{
	if (cell_col > 9)
		return (0);
	if (ft_can_place_queen(board, cell_row, cell_col))
	{
		board[cell_row][cell_col] = 1;
		return (1);
	}
	else
		return (ft_place_queen(board, cell_row, cell_col + 1));
}

int	ft_can_place_queen(int board[10][10], int cell_row, int cell_col)
{
	int	r;
	int	c;

	if (cell_col > 9)
		return (0);
	r = cell_row;
	c = cell_col;
	while (r >= 0)
	{
		if (board[r][c] == 1)
			return (0);
		r--;
	}
	r = cell_row;
	c = cell_col;
	while (r >= 0 && c >= 0)
	{
		if (board[r][c] == 1)
			return (0);
		r--;
		c--;
	}
	r = cell_row;
	c = cell_col;
	while (r >= 0 && c <= 9)
	{
		if (board[r][c] == 1)
			return (0);
		r--;
		c++;
	}
	return (1);
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
			write(2, &c, 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}
