/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:49:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 16:18:08 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_strrev.h"

int	main(void)
{
	char	*src;
	char	*str;

	src = "Hello, World !";
	str = (char *)malloc((strlen(src) + 1) * sizeof(*src));
	if (str)
	{
		strcpy(str, src);
		printf("%s\n", str);
		ft_strrev(str);
		printf("%s\n", str);
		free(str);
		return (0);
	}
	return (1);
}
