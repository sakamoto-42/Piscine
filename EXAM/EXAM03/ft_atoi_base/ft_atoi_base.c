/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:43:17 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/04 12:23:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_len(const char *str);
char	ft_to_lowercase(char c);
int		ft_recursive_power(int base, int pow);

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		i_str_end;
	char	*base_dict;
	int		i_dict;
	int		pow;
	char	c;
	int		base_10_res;

	sign = 1;
	i_str_end = ft_str_len(str) - 1;
	if (*str == '-')
	{
		sign = -1;
		i_str_end++;
	}
	base_dict = "0123456789abcdef";
	base_10_res = 0;
	pow = 0;
	while (i_str_end >= 0)
	{
		c = ft_to_lowercase(str[i_str_end]);
		i_dict = 0;
		while (i_dict < str_base && c != base_dict[i_dict])
			i_dict++;
		if (i_dict < str_base)
		{
			base_10_res += i_dict * ft_recursive_power(str_base, pow);
			pow++;
		}
		i_str_end--;
	}
	write(1, "\n", 1);
	return (sign * base_10_res);
}

int	ft_str_len(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	ft_to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_recursive_power(int base, int pow)
{
	if (pow == 0)
		return (1);
	return (base * ft_recursive_power(base, pow - 1));
}

int	main(void)
{
	char	*str;
	int		str_base;
	int		i_base;

	str = "-3210123";
	str_base = 4;
	i_base = ft_atoi_base(str, str_base);
	printf("%d", i_base);
	write(1, "\n", 1);
}
