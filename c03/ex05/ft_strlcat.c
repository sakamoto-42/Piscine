/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:37:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/12 17:33:39 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	while (*dest != '\0')
		dest++;

	i = 0;
	while (*src != '\0')
	{
		if (i < nb)
		{
			*dest = *src;
			dest++;
			src++;
		}
		i++;
	}
	*dest = '\0';
	return (i);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
