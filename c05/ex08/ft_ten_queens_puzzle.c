/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:46:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 15:11:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_board(int board[10][10]);
int		ft_place_queens(int board[10][10], int cell_row);
int		ft_can_place_queen(int board[10][10], int row, int col);
void	ft_print_board(int board[10][10]);
void	ft_print_placements(int board[10][10]);

int	main()
{
	int	board[10][10];

	ft_init_board(board);
	ft_place_queens(board, 0);
	ft_print_board(board);
	write(1, "\n", 1);
	ft_print_placements(board);
	write(1, "\n", 1);
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
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	ft_place_queens(int board[10][10], int cell_row)
{
	int	col;

	if (cell_row > 9)
		return (1);

	col = 0;
	while (col <= 9)
	{
		if (ft_can_place_queen(board, cell_row, col))
		{
			board[cell_row][col] = 1;
			if (ft_place_queens(board, cell_row + 1))
				return (1);
			board[cell_row][col] = 0;
		}
		col++;
	}
	return (0);
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
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			if (board[row][col] == 1)
				c = 'X';
			else
				c = 'O';
			write(1, &c, 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	ft_print_placements(int board[10][10])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			if (board[row][col] == 1)
			{
				c = col + '0';
				write(1, &c, 1);
			}
			col++;
		}
		row++;
	}
}
