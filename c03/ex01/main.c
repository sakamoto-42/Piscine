/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:53:01 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/12 08:44:25 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strncmp.h"
#include "ft_putnbr.h"

int	main(void)
{
	char			s1[10];
	char			s2[10];
	unsigned int	n;
	int				res;

	ft_strcpy(s1, "Bonjour");
	ft_strcpy(s2, "Salut");
	n = 2;
	res = ft_strncmp(s1, s2, n);
	ft_putnbr(res);
	return (0);
}
