/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:11:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/08 10:00:22 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	i = 0;
	is_first_letter = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_first_letter)
			{
				str[i] -= 32;
				is_first_letter = 0;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!is_first_letter)
				str[i] += 32;
			else
				is_first_letter = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_first_letter = 0;
		else
			is_first_letter = 1;
		i++;
	}
	return (str);
}
