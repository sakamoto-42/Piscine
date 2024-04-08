/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:14:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/08 17:24:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;

	while (src[src_size] != '\0')
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
			src_size = i;
		}
		src_size++;
	}
	dest[i] = '\0';
	return (src_size);
}
