/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:12:42 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:37:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include "ft_strcapitalize.h"
#include <unistd.h>

int	main(void)
{
	char	str[62];

	ft_strcpy(str, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	ft_putstr(str);
	write(1, "\n", 1);
	ft_putstr(ft_strcapitalize(str));
	write(1, "\n", 1);
	return (0);
}
