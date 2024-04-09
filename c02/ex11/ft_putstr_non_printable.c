/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:18:20 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/09 11:17:04 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_handle_non_printable_char(char c);
void	ft_print_hex_char(int value);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_handle_non_printable_char(str[i]);
		i++;
	}
}

void	ft_handle_non_printable_char(char c)
{
	int	char_dec_value;

	char_dec_value = (unsigned char) c;
	write(1, "\\", 1);
	ft_print_hex_char(char_dec_value / 16);
	ft_print_hex_char(char_dec_value % 16);
}

void	ft_print_hex_char(int value)
{
	char	hex_char;

	if (value <= 9)
		hex_char = value + '0';
	else
		hex_char = value - 10 + 'a';
	write(1, &hex_char, 1);
}
