/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:19:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/22 08:54:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_compare_argv(char *str1, char *str2);
void	ft_write_argv(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	**temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compare_argv(argv[i], argv[j]))
			{
				temp = argv[i];
				*argv[i] = argv[j];
				*argv[j] = temp;
			}
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
		if (str1 > str2)
		{
			return (1);
		}
		else
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

void	ft_write_argv(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}
