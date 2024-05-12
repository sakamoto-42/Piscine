/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:37:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/12 17:54:58 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (*dest != '\0')
	{
		dest++;
		dest_len++;
	}
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while ((*src != '\0') && (dest_len + i < nb))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
