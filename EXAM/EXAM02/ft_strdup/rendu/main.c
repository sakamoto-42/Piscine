/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:02:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 16:08:58 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strdup.h"

int	main(void)
{
	char	*str;
	char	*dest;

	str = "Hello, World !";
	printf("%s\n", str);
	dest = ft_strdup(str);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
