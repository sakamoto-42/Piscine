/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:21:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/09 19:44:12 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_addr_first_char(void *current_addr);
void	ft_print_str_hexa_content(void *current_addr, unsigned int current_size);
void	ft_print_hex_char(unsigned char c);
void	ft_print_str_printable_content(void *current_addr, unsigned int current_size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	offset;
	unsigned char	*ptr;

	offset = 0;
	ptr = (unsigned char *)addr;
	while (offset < size)
	{
		ft_print_hex_addr_first_char(ptr + offset);
  		write(1, ": ", 2);
		ft_print_str_hexa_content(ptr + offset, size - offset);
		write(1, " ", 1);
		ft_print_str_printable_content(ptr + offset, size - offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}

void	ft_print_hex_addr_first_char(void *current_addr)
{
	unsigned long	addr_first_char;
	int		shift_value;
	unsigned char	current_byte;

	addr_first_char = (unsigned long)current_addr;
	shift_value = (sizeof(addr_first_char) * 8) - 8;
	while (shift_value >= 0)
	{
		current_byte = (addr_first_char >> shift_value) & 0xFF;
		ft_print_hex_char(current_byte);
		shift_value -= 8;
	}
}

void	ft_print_str_hexa_content(void *current_addr, unsigned int current_size)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)current_addr;
	while (i < 16 && i < current_size)
	{
		ft_print_hex_char(str[i]);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
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

void	ft_print_str_printable_content(void *current_addr, unsigned int current_size)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)current_addr;
	while (i < 16 && i < current_size)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
			write(1, ".", 1);
		i++;
	}
}
