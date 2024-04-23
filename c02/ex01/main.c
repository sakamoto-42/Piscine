/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:42:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:34:52 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "ft_strncpy.h"
#include <unistd.h>

int	main(void)
{
	char			*src;
	char			dest[14];
	unsigned int	n;

	src = "Hello World !";
	n = 5;
	ft_putstr(src);
	write(1, "\n", 1);
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	write(1, "\n", 1);
	return (0);
}
