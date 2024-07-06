/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:00:57 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 21:35:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		lines_count;
	char	**board;
	int		i;
	int		cols_count;
	int		j;
	char	c;

	if (argc - 1 > 0)
	{
		lines_count = argc - 1;
		board = malloc(sizeof(char *) * lines_count);
		cols_count = 0;
		while (argv[1][cols_count] != '\0')
			cols_count++;
		i = 0;
		if (board)
		{
			while (i < lines_count)
			{
				board[i] = malloc(sizeof(char) * cols_count);
				i++;
			}
		}
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				board[i - 1][j] = argv[i][j];
				j++;
			}
			i++;
		}
		i = 0;
		while (i < lines_count)
		{
			j = 0;
			while (j < cols_count)
			{
				c = board[i][j];
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
