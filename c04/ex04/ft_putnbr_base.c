/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/15 18:30:42 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_base_len(char *base);
void	ft_extract_last_nbr(int	n, int base_len, char *base);
void	ft_convert_nbr_to_base(int n, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;

	base_length = ft_base_len(base);
	ft_extract_last_nbr(nbr, base_length, base);
}

int		ft_base_len(char *base)
{
	int	i;

	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_extract_last_nbr(int n, int base_len, char *base)
{
	if (n >= base_len)
		ft_extract_last_nbr(n / base_len, base_len, base);
	ft_convert_nbr_to_base(n % base_len, base);
}

void	ft_convert_nbr_to_base(int n, char *base)
{
	char c;
	c = base[n];
	write(1, &c, 1);
}
