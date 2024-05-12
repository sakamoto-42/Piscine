/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:41:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/12 16:40:04 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strlcat.h"
#include "ft_putnbr.h"

int	main(void)
{
	char			dest[14];
	char			src[9];
	unsigned int	nb;
	unsigned int	res;

	ft_strcpy(dest, "Hello");
	ft_strcpy(src, " World !");
	nb = sizeof(dest);
	res = ft_strlcat(dest, src, nb);
	ft_putnbr(res);
	return (0);
}
