/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:19:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/25 19:53:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_compare_argv(char *str1, char *str2);
void	ft_swap_argv(char **argv, int i, int j);
void	ft_write_argv(char *str);

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compare_argv(argv[i], argv[j]) > 0)
				ft_swap_argv(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_write_argv(argv[i]);
		i++;
	}
	return (0);
}

int	ft_compare_argv(char *str1, char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_swap_argv(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

void	ft_write_argv(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
		write(1, "\n", 1);
	}
}
