/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:22:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/14 09:55:33 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include <unistd.h>
#include "ft_strdup.h"
#include <stdlib.h>
#include <errno.h>

int	main(void)
{
	char	src[14];
	char	*dest;

	ft_strcpy(src, "Hello World !");
	ft_putstr(src);
	write(1, "\n", 1);
	dest = ft_strdup(src);
	if (dest == NULL)
	{
		write(1, "Error duplicating string :\n", 28);
		if (errno == ENOMEM)
			write(1,
				"Insufficient memory available to allocate duplicate string.\n",
				60);
		else
			write(1, "An unknow error occured.\n", 25);
		return (1);
	}
	ft_putstr(dest);
	free(dest);
	write(1, "\n", 1);
	return (0);
}
