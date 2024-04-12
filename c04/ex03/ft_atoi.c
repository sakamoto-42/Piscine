/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/12 19:57:29 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	minus_count;
	unsigned int	i;
	int				start;
	int				end;
	int				count;

	minus_count = 0;
	start = -1;
	count = 0;
	while	(str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)	
			i++;
		if (str[i] == 43)
			i++;
		if (str[i] == 45)
		{
			minus_count++;
			i++;
		}
		if (start == -1 && str[i] >= 48 && str[i] <= 57)
		{
			start = i;
			i++;
			end = start;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			end = i;
			i++;
		}
	}
	if (start != -1)
	{
		while (start < end)
		{
			count += str[start] * 10;
			start++;
		}
	}
	if (minus_count % 2 == 1)
		return (count);
	else
		return (count);
}
