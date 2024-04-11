/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:37:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 21:50:14 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
			dest[dest_size] = src[i];
			dest_size++;
			i++;
	}
	dest[dest_size] = '\0';
	return (dest_size + i);
}
