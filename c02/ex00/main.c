/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:39:28 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/01 17:04:17 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "ft_strcpy.h"
#include <unistd.h>

int	main(void)
{
	char	*src;
	char	dest[14];

	src = "Hello World !";
	ft_putstr(src);
	write(1, "\n", 1);
	ft_strcpy(dest, src);
	ft_putstr(dest);
	write(1, "\n", 1);
	return (0);
}
