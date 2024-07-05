/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:42:50 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/02 07:58:00 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_unique_char(char *src_start, char *src, char c);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	c;

	if (argc - 1 == 2)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (*s1 != '\0')
		{
			c = *str1;
			if (ft_check_unique_char(argv[1], s1, c))
				write(1, &c, 1);
			s1++;
		}
		while (*s2 != '\0')
		{
			c = *s2;
			if (check_unique(argv[1], s1, c) && check_unique(argv[2], s2, c))
				write(1, &c, 1);
			s2++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_check_unique_char(char *src_start, char *src, char c)
{
	while (src_start < src)
	{
		if (*src_start == c)
			return (0);
		src_start++;
	}
	return (1);
}
