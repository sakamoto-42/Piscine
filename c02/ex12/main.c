/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:23:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 12:12:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_memory.h"
#include "ft_strcpy.h"

int	main(void)
{
	char			str[94];
	unsigned int	size;

	size = 93;
	ft_strcpy(str, "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol\nlol\n ");
	ft_print_memory(str, size);
	return (0);
}
