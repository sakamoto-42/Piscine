/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:11:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/18 09:16:04 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strcpy.h"

int	main(void)
{
	char	dst[15];
	char	*src;

	src = "Hello, World !";
	write(1, src, 14);
	write(1, "\n", 1);
	ft_strcpy(dst, src);
	write(1, dst, 14);	
	write(1, "\n", 1);
	return (0);
}
