/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:40 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/12 13:39:14 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_start;
	unsigned int	i;

	dest_start = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while ((i < nb) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_start);
}
