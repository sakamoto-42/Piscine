/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 07:46:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 08:23:45 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	*s2;
	char	s1[14];
	int		i;
	char	c;
	
	s2 = "Hello World !";
	while (*s2 != '\0')
		write(1, s2++, 1);
	write(1, "\n", 1);
	ft_strcpy(s1, s2);
	i = 0;
	while (s1[i] != '\0')
	{
		c = s1[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
