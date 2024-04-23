/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:17:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/22 22:17:49 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strncat.h"
#include "ft_putstr.h"

int	main(void)
{
	char			dest[6];
	char			src[14];
	unsigned int	nb;
	char			*res;

	nb = 3;
	ft_strcpy(dest, "Hello");
	ft_strcpy(src, " World !");
	res = ft_strncat(dest, src, nb);
	ft_putstr(res);
	return (0);
}
