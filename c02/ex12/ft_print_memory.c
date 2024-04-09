/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:21:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/09 15:49:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_hex(char *str, unsigned int size);
void	ft_print_hex_char(unsigned char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;

	str = (char *)addr;
	ft_putstr_hex(str, size);
	write(1, ":", 1);
	return (addr);
}

void	ft_putstr_hex(char *str, unsigned int size)
{
	int	i;
	unsigned int	j;
	unsigned char	hex_char;

	i = 0;
	j = 0;
	while (j <= size) 
	{
		while (str[i] != '\0')
		{
			hex_char = (unsigned char)str[i];
			ft_print_hex_char(hex_char);
			i++;
		}
		str++;
		j++;
		write(1, " ", 1);
	}
}

void	ft_print_hex_char(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}
