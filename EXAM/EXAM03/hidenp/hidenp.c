/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:28:36 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 17:49:14 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	hidenp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	res;

	if (argc - 1 == 2)
	{
		res = hidenp(argv[1], argv[2]) + '0';
		write(1, &res, 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

int	hidenp(char *s1, char *s2)
{
	int	res;

	res = 0;
	while (*s2 != '\0')
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		res = 1;
	return (res);
}
