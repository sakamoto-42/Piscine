/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:43:17 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/04 19:14:03 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_handle_sign(const char **str);
int		ft_str_len(const char *str);
int		ft_char_to_val(char c, int str_base);
int		ft_recursive_power(int base, int pow);

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		base_10_res;
	int		pow;
	int		len;
	int		val;

	sign = ft_handle_sign(&str);
	base_10_res = 0;
	pow = 0;
	len = ft_str_len(str) - 1;
	while (len >= 0)
	{
		val = ft_char_to_val(str[len], str_base);
		if (val >= 0)
		{
			base_10_res += val * ft_recursive_power(str_base, pow);
			pow++;
		}
		len--;
	}
	write(1, "\n", 1);
	return (sign * base_10_res);
}

int	ft_handle_sign(const char **str)
{
	int	sign;

	sign = 1;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	return (sign);
}

int	ft_str_len(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_char_to_val(char c, int str_base)
{
	char	*base_dict;
	int		i;

	base_dict = "0123456789abcdef";
	i = 0;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	while (i < str_base && c != base_dict[i])
		i++;
	if (i < str_base)
		return (i);
	return (-1);
}

int	ft_recursive_power(int base, int pow)
{
	if (pow == 0)
		return (1);
	return (base * ft_recursive_power(base, pow - 1));
}
