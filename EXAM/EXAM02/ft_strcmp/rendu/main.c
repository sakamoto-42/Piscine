/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:38:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 14:44:07 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcmp.h"

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "Hello";
	str2 = "World";
	result = ft_strcmp(str1, str2);
	printf("%d\n", result);
	return (0);
}
