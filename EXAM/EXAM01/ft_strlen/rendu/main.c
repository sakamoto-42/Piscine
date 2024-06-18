/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:21:22 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 09:26:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"
#include <unistd.h>

int	main(void)
{
	char	*str;
	int		i;
	char	c;

	str = "Hello, World !";
	i = ft_strlen(str);
	c = (i / 10) + '0';
	write(1, &c, 1);
	c = (i % 10) + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
