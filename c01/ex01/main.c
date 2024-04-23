/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:17:11 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/03/30 10:22:28 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_ft.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	n;
	int	*pt1;
	int	**pt2;
	int	***pt3;
	int	****pt4;
	int	*****pt5;
	int	******pt6;
	int	*******pt7;
	int	********pt8;

	pt1 = &n;
	pt2 = &pt1;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	ft_ultimate_ft(&pt8);
	ft_putnbr(********pt8);
	return (0);
}
