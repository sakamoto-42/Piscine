/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:06:13 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:23:39 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "ft_strupcase.h"
#include <unistd.h>

int	main(void)
{
	char	str[27];
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (c <= 'z')
	{
		str[i] = c;
		i++;
		c++;
	}
	str[i] = '\0';
	ft_putstr(str);
	write(1, "\n", 1);
	ft_strupcase(str);
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
