/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:11:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 18:17:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test(char **str, char *replace, int i)
{
	char	c;

	while (*replace != '\0')
	{
		c = *replace;
		write(1, &c, 1);
		replace++;
	}
	(*str) += i - 1;
}

int	ft_search(char *str, char *search)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && search[i] != '\0')
	{
		if (str[i] == search[i])
			i++;
		else
			return (0);
	}
	if (search[i] == '\0')
		return (i);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	int		i;

	if (argc - 1 == 3)
	{
		str = argv[1];
		while (*str != '\0')
		{
			i = ft_search(str, argv[2]);
			if (i)
				test(&str, argv[3], i);
			else
			{
				c = *str;
				write(1, &c, 1);
			}
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
