/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:04:34 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 11:13:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalize(char *str);

int	main(int argc, char **argv)
{
	int	i;

	if (argc - 1 > 0)
	{
		i = 1;
		while (i < argc)
		{
			rstr_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

void	rstr_capitalize(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\0')
		{
			if (*str >= 'a' && *str <= 'z')
				c = *str - 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
			c = *str + 32;
		write(1, &c, 1);
		str++;
	}
}
