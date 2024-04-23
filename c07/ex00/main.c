/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:22:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/22 20:39:32 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include <unistd.h>
#include "ft_strdup.h"
#include "ft_putnbr.h"

int	main(void)
{
	char	src[14];
	char	*dest;

	ft_strcpy(src, "Hello World !");
	ft_putstr(src);
	write(1, "\n", 1);
	dest = ft_strdup(src);
	ft_putstr(dest);
	write(1, "\n", 1);
	return (0);
}
