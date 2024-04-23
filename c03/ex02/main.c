/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:13 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 19:55:35 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strcat.h"
#include "ft_putstr.h"

int	main(void)
{
	char	dest[6];
	char	src[14];
	char	*res;

	ft_strcpy(dest, "Hello");
	ft_strcpy(src, " World !");
	res = ft_strcat(dest, src);
	ft_putstr(res);
	return (0);
}
