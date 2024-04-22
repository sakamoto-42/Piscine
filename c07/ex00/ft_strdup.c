/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:21:59 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/22 20:39:00 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	length = i + 1;
	dest = malloc(sizeof(*src) * length);
	if (dest)
	{
		i = 0;
		while (i < length)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	return (NULL);
}
