/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:59:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/05 18:28:52 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lcm.h"
#include <stdio.h>

int	main(void)
{
	unsigned int	res;
	unsigned int	a;
	unsigned int	b;

	a = 24;
	b = 16;
	res = lcm(a, b);
	printf("%d", res);
}
