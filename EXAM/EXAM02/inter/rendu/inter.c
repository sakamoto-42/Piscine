/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:05:12 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/30 13:28:27 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_unique_char(char *src, char c, int i);

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	char	c;
	int		i;

	if (argc - 1 == 2)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		while (str1[i] != '\0')
		{
			c = str1[i];
			if (ft_check_unique_char(str1, c, i))
			{
				while (str1[i] != *str2)
					str2++;
				write(1, &c, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_check_unique_char(char *src, char c, int i)
{
	int	start;

	start = 0;
	while (start < i)
	{
		if (src[start] == c)
			return (0);
		start++;
	}
	return (1);
}
