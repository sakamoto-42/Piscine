/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:21:59 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/13 19:17:23 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	length = i;
	dest = (char *)malloc((length + 1) * sizeof(*src));
	if (dest)
	{
		i = 0;
		while (i < length)
		{
			dest[i] = src[i];
			i++;
		}
  dest[i] = '\0';
		return (dest);
	}
	errno = ENOMEM;
	return (NULL);
}
