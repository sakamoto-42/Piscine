/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:40:32 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/15 22:34:08 by sakamoto-42      ###   ########.fr       */
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
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base_error(char *base, int base_len)
{
	int	i;
	int	j;

	if (base_len == 0 || base_len == 1)
		return (1);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_str_base_to_dec(char *str, int base_len, char *base)
{
	int	i;
	int	minus_count;
	int	sign;
	int	nbr;
	int	n;

	i = 0;
	minus_count = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	if (minus_count % 2 != 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] != '\0')
	{
		n = ft_char_base_to_dec(str[i], base_len, base);
		nbr = nbr * base_len + n;
		i++;
	}
	return (nbr * sign);
}

int	ft_char_base_to_dec(char c, int base_len, char *base)
{
	int	i;

	i = 0;
	while (i < base_len)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
