/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:41:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/16 08:58:30 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_atoi_base.h"
#include "ft_putnbr.h"

int	main(void)
{
	char	str[20];
	char	base[20];
	int		nbr;

	ft_strcpy(str, "-poneyvif");
	ft_strcpy(base, "poneyvif");
	nbr = ft_atoi_base(str, base);
	ft_putnbr(nbr);
	return (0);
}
