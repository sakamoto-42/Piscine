/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:23:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/11 09:08:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_memory.h"
#include "ft_strcpy.h"
#include "ft_strlen.h"

int	main(void)
{
	char			str[92];
	unsigned int	size;

	ft_strcpy(str,
		"Bonjour les aminches\t\n\tc  est fou\ttout\tce "
		"qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol\nlol\n ");
	size = ft_strlen(str) + 1;
	ft_print_memory(str, size);
	return (0);
}
