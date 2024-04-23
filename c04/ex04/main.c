/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:39:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/15 20:31:19 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putnbr_base.h"

int	main(void)
{
	int		nbr;
	char	base[20];

	nbr = 1234567890;
	ft_strcpy(base, "poneyvif");
	ft_putnbr_base(nbr, base);
	return (0);
}
