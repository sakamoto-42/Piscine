/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/05/21 21:38:10 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_base_len(char *base);
int		ft_check_base_error(char *base, long int base_len);
void	ft_extract_last_nbr(long int n, long int base_len, char *base);
void	ft_convert_nbr_to_base(long int n, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	long int	long_nbr;
	long int	base_length;
	int			error;

	base_length = ft_base_len(base);
	error = ft_check_base_error(base, base_length);
	if (error)
		return ;
	long_nbr = (long int)nbr;
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	ft_extract_last_nbr(long_nbr, base_length, base);
}

int	ft_base_len(char *base)
{
	char	*ptr;
	
	ptr = base;
	while (*ptr != '\0')
		ptr++;
	return (ptr - base);
}

int	ft_check_base_error(char *base, long int base_len)
{
	char	*ptr1;
	char	*ptr2;

	if (base_len == 0 || base_len == 1)
		return (1);
	ptr1 = base;
	while (ptr1 < base + base_len)
	{
		if (*ptr1 == '+' || *ptr1 == '-')
			return (1);
		ptr1++;
	}
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
	return (0);
}

void	ft_extract_last_nbr(long int n, long int base_len, char *base)
{
	if (n >= base_len)
		ft_extract_last_nbr(n / base_len, base_len, base);
	ft_convert_nbr_to_base(n % base_len, base);
}

void	ft_convert_nbr_to_base(long int n, char *base)
{
	char	c;

	c = *(base + n);
	write(1, &c, 1);
}
