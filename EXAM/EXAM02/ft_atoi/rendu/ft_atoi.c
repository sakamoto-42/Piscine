/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:16:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 11:24:53 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_nbr(int result, int digit, int sign, int *overflow)
{
	int			int_min;
	int			int_max;
	long long	temp_result;

	int_min = -2147483648;
	int_max = 2147483647;
	temp_result = (long long)result * sign * 10 + digit * sign;
	if (temp_result > int_max)
	{
		*overflow = 1;
		return (int_max);
	}
	else if (temp_result < int_min)
	{
		*overflow = 1;
		return (int_min);
	}
	else
	{
		*overflow = 0;
		result = result * 10 + digit;
		return (result);
	}
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	overflow;

	sign = 1;
	result = 0;
	overflow = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = calc_nbr(result, *str - '0', sign, &overflow);
		if (overflow)
			return (result);
		str++;
	}
	return (sign * result);
}
