/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:40:32 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/09 19:52:20 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_base_len(char *base);
int		ft_check_base_error(char *base, int base_len);
int		ft_atoi_str_base_to_dec(char *str, int base_len, char *base);
int		ft_char_base_to_dec(char c, int base_len, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	base_length;
	int	error;
	int	nbr;

	base_length = ft_base_len(base);
	error = ft_check_base_error(base, base_length);
	if (error)
		return (0);
	nbr = ft_atoi_str_base_to_dec(str, base_length, base);
	return (nbr);
}

int	ft_base_len(char *base)
{
	char	*ptr;

	ptr = base;
	while (*ptr != '\0')
		ptr++;
	return (ptr - base);
}

int	ft_check_base_error(char *base, int base_len)
{
	char	*ptr1;
	char	*ptr2;

	if (base_len == 0 || base_len == 1)
		return (1);
	ptr1 = base;
	while (ptr1 < base + base_len - 1)
	{
		ptr2 = ptr1 + 1;
		while (ptr2 < base + base_len)
		{
			if (*ptr1 == *ptr2)
				return (1);
			ptr2++;
		}
		ptr1++;
	}
	ptr1 = base;
	while (ptr1 < base + base_len)
	{
		if (*ptr1 == '+' || *ptr1 == '-')
			return (1);
		ptr1++;
	}
	return (0);
}

int	ft_atoi_str_base_to_dec(char *str, int base_len, char *base)
{
	int		sign;
	int		nbr;
	int		n;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str != '\0')
	{
		n = ft_char_base_to_dec(*str, base_len, base);
		nbr = nbr * base_len + n;
		str++;
	}
	return (nbr * sign);
}

int	ft_char_base_to_dec(char c, int base_len, char *base)
{
	char	*ptr;

	ptr = base;
	while (ptr < base + base_len)
	{
		if (c == *ptr)
			return (ptr - base);
		ptr++;
	}
	return (-1);
}
