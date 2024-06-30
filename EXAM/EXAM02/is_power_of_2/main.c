/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:43:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/30 13:47:03 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_power_of_2.h"
#include <stdio.h>

int	main(void)
{
	unsigned int	n;
	int				res;

	n = 20;
	res = is_power_of_2(n);
	printf("%d", res);
	return (0);
}
