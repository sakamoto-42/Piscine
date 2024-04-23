/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:47:15 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 18:43:16 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strcmp.h"
#include "ft_putnbr.h"

int	main(void)
{
	char	s1[4];
	char	s2[4];
	int		cmp;

	ft_strcpy(s1, "XYZ");
	ft_strcpy(s2, "ABC");
	cmp = ft_strcmp(s1, s2);
	ft_putnbr(cmp);
	return (0);
}
