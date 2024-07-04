/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:06:32 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/04 19:09:40 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_base.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		str_base;
	int		i_base;

	str = "-3210123";
	str_base = 4;
	i_base = ft_atoi_base(str, str_base);
	printf("%d\n", i_base);
}
