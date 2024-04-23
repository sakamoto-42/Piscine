/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:01:47 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 20:51:53 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_strstr.h"
#include "ft_putstr.h"

int	main(void)
{
	char	str[21];
	char	to_find[7];
	char	*res;

	ft_strcpy(str, "Hello needle World !");
	ft_strcpy(to_find, "needle");
	res = ft_strstr(str, to_find);
	ft_putstr(res);
	return (0);
}
