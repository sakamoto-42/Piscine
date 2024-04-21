/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:46:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 16:10:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_board(int board[10][10]);
int		ft_place_queens(int board[10][10], int cell_row, int *ptr_poss_nb);
int		ft_can_place_queen(int board[10][10], int row, int col);
void	ft_print_placements(int board[10][10]);

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	poss_nb;

	poss_nb = 0;
	ft_init_board(board);
	ft_place_queens(board, 0, &poss_nb);
	return (poss_nb);
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

int	ft_place_queens(int board[10][10], int cell_row, int *ptr_poss_nb)
{
	int	col;

	if (cell_row > 9)
	{
		ft_print_placements(board);
		write(1, "\n", 1);
		(*ptr_poss_nb)++;
		return (0);
	}
	col = 0;
	while (col <= 9)
	{
		if (ft_can_place_queen(board, cell_row, col))
		{
			board[cell_row][col] = 1;
			if (ft_place_queens(board, cell_row + 1, ptr_poss_nb))
				return (1);
			board[cell_row][col] = 0;
		}
		col++;
	}
	return (0);
}

int	ft_can_place_queen(int board[10][10], int cell_row, int cell_col)
{
	int	i;

	if (cell_col > 9)
		return (0);
	i = 1;
	while (i <= cell_row)
	{
		if (board[cell_row - i][cell_col] == 1)
			return (0);
		if (cell_col - i >= 0 && board[cell_row - i][cell_col - i] == 1)
			return (0);
		if (cell_col + i <= 9 && board[cell_row - i][cell_col + i] == 1)
			return (0);
		i++;
	}
	return (1);
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
