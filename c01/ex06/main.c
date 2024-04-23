/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:40:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/30 17:16:31 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	length;

	length = ft_strlen("Hello World !");
	ft_putnbr(length);
	return (0);
}
