/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:46:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 10:22:23 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_board(int board[10][10]);
int		ft_place_queen(int board[10][10], int line, int can_place);
int		ft_check_cell(int board[10][10], int l, int c);
void	ft_print_board(int board[10][10]);

int	main()
{
	int	board[10][10];

	ft_init_board(board);
	ft_place_queen(board, 0, 0);
	ft_print_board(board);
	return (0);
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

int	ft_place_queen(int board[10][10], int line, int can_place)
{
	if (line > 9)
		return (0);
	can_place = ft_check_cell(board, line, 0);
	if (can_place)
	{
		return (ft_place_queen(board, line + 1, can_place));
	}
	return (ft_place_queen(board, line + 1, can_place));
}

int	ft_check_cell(int board[10][10], int l, int c)
{
	int	i;
	int j;

	i = 0;
	while (i < c)
	{
		if (board[i][l] == 1)
			return (0);
		i++;
	}
	j = l;
	i = c;
	while (i >= 0 && j >= 0)
	{
		if (board[c][j] == 1)
			return (0);
		i--;
		j--;
	}
	i = l;
	j = c;
	if (j >= 0 && i <= 9)
	{
		if (board[c][j] == 1)
			return (0);
		i++;
		j--;
	}
	board[c][l] = 1;
	return (ft_check_cell(board, l, c + 1));
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
