/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:29:39 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/20 09:07:09 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strlen.h"
#include "ft_putnbr.h"

int	main(void)
{
	char	str[14];
	int		len;

	ft_strcpy(str, "Hello World !");
	len = ft_strlen(str);
	ft_putnbr(len);
	return (0);
}
