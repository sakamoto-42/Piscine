/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:21:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/09 21:19:26 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_addr_first_char(void *addr);
void	ft_print_str_hexa_content(void *addr, unsigned int size);
void	ft_print_hex_char(unsigned char c);
void	ft_print_str_printable_content(void *addr, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int offset = 0;

	if (size != 0)
	{
		ft_print_hex_addr_first_char(addr);
		ft_print_str_hexa_content(addr, size);
		ft_print_str_printable_content(addr, size);
	}
	return (addr);
}

void	ft_print_hex_addr_first_char(void *addr)
{
	unsigned long	addr_first_char;
	unsigned char	current_byte;
	int		shift_value;

	addr_first_char = (unsigned long)addr;
	shift_value = 60;
	while (shift_value >= 0)
	{
		current_byte = (addr_first_char >> shift_value) & 0xFF;
		ft_print_hex_char(current_byte);
		shift_value -= 8;
	}
	write(1, ": ", 1);
}

void	ft_print_str_hexa_content(void *addr, unsigned int size)
{
	unsigned int	i;
	char *str = (char*)addr;
	unsigned char	hex_char;

	i = 0;
	while (i < size)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			write(1, ".", 1);
		else
		{
			hex_char = (unsigned char)str[i];
			ft_print_hex_char(hex_char);
		}
		i++;
	}
}

void	ft_print_hex_char(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_print_str_printable_content(void *addr, unsigned int size)
{
	unsigned int	i;
	char		*str;
	char		c;

	i = 0;
	str = (char *)addr;
	while (i < size - 1)
	{
		c = str[i];
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
		}
		else
			write(1, ".", 1);
		i++;
		if (i % 16 == 0)
			write(1, "\n", 1);
	}
}
