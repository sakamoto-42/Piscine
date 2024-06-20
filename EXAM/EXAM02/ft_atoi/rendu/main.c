/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:32:52 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 11:23:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	str = "-12345";
	i = ft_atoi(str);
	printf("%d\n", i);
	str = "54321";
	i = ft_atoi(str);
	printf("%d\n", i);
	str = "-2147483649";
	i = ft_atoi(str);
	printf("%d\n", i);
	str = "2147483648";
	i = ft_atoi(str);
	printf("%d\n", i);
	return (0);
}
