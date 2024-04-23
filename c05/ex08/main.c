/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:10:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/21 15:48:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ten_queens_puzzle.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	res;

	res = ft_ten_queens_puzzle();
	ft_putnbr(res);
	return (0);
}
