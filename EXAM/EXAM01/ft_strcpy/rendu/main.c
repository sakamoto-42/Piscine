/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:11:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/19 10:53:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strcpy.h"

int	main(void)
{
	char	dst[15];
	char	*src;
	char	*dest;

	src = "Hello, World !";
	write(1, src, 14);
	write(1, "\n", 1);
	dest = ft_strcpy(dst, src);
	write(1, dst, 14);
	write(1, "\n", 1);
	write(1, dest, 14);
	write(1, "\n", 1);
	return (0);
}
