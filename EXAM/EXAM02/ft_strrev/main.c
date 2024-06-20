/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:49:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 15:51:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strrev.h"

int	main(void)
{
	char	*str;
	char	*rev;

	str = "Hello, World !";
	printf("%s\n", str);
	rev = ft_strrev(str);
	printf("%s\n", rev);
	return (0);
}
