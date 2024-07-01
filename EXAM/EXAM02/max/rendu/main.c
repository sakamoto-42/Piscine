/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 07:48:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/01 08:00:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max.h"
#include <stdio.h>

int	main(void)
{
	int				tab[5];
	unsigned int	len;
	int				max_nb;

	tab[0] = 5;
	tab[1] = 15;
	tab[2] = 105;
	tab[3] = 35;
	tab[4] = 45;
	len = 5;
	max_nb = max(tab, len);
	printf("%d", max_nb);
	return (0);
}
