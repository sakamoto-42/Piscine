/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:16:04 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:36:34 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include "ft_strlcpy.h"
#include "ft_putnbr.h"
#include <unistd.h>
#include <bsd/string.h>

int	main(void)
{
	char			src[14];
	char			dest1[6];
	char			dest2[6];
	unsigned int	size;

	size = 6;
	ft_strcpy(src, "Hello World !");
	ft_putstr(src);
	write(1, "\n", 1);
	ft_putnbr(strlcpy(dest1, src, size));
	write(1, "\n", 1);
	ft_putstr(dest1);
	write(1, "\n", 1);
	ft_putnbr(ft_strlcpy(dest2, src, size));
	write(1, "\n", 1);
	ft_putstr(dest2);
	write(1, "\n", 1);
	return (0);
}
