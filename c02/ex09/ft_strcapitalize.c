/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:11:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/08 13:49:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_handle_char_lowercase(char *c, int *is_first_letter);
void	ft_handle_char_uppercase(char *c, int *is_first_letter);
void	ft_handle_char_numeric(int *is_first_letter);
void	ft_handle_char_non_alphanumeric(int *is_first_letter);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	i = 0;
	is_first_letter = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			handle_char_lowercase(&str[i], &is_first_letter);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			handle_char_uppercase(&str[i], &is_first_letter);
		else if (str[i] >= '0' && str[i] <= '9')
			handle_char_numeric(&is_first_letter);
		else
			handle_char_non_alphanumeric(&is_first_letter);
		i++;
	}
	return (str);
}

void	handle_char_lowercase(char *c, int *is_first_letter)
{
	if (*is_first_letter)
	{
		*c -= 32;
		*is_first_letter = 0;
	}
}

void	handle_char_uppercase(char *c, int *is_first_letter)
{
	if (!*is_first_letter)
		*c += 32;
	else
		*is_first_letter = 0;
}

void	handle_char_numeric(int *is_first_letter)
{
	*is_first_letter = 0;
}

void	handle_char_non_alphanumeric(int *is_first_letter)
{
	*is_first_letter = 1;
}
