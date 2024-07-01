/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:42:07 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 22:14:52 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		wd_match(char *s1, char *s2);
void	print_wd(char *s1);

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;

	if (argc - 1 == 2)
	{
		str1 = argv[1];
		str2 = argv[2];
		if (wd_match(str1, str2))
			print_wd(str1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

int	wd_match(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (1);
	else
		return (0);
}

void	print_wd(char *s1)
{
	char	c;

	while (*s1 != '\0')
	{
		c = *s1;
		write(1, &c, 1);
		s1++;
	}
}
