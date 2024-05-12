/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:00:35 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/12 13:49:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_start;

	to_find_start = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		to_find = to_find_start;
		while (*str == to_find && to_find != '\0')
			str++;
		if (to_find == '\0')
			return (*str);
		to_find++;
	}
	return (NULL);
}
