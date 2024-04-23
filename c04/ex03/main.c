/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:59 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/12 20:20:39 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_atoi.h"
#include "ft_putnbr.h"

int	main(void)
{
	char	str[18];
	int		res;

	ft_strcpy(str, "\t\n\v\f\r ++-+-+-12345abcd");
	res = ft_atoi(str);
	ft_putnbr(res);
	return (0);
}
