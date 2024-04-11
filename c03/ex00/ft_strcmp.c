/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:44:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/11 19:10:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				cmp;
	unsigned char	s1_char;
	unsigned char	s2_char;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		s1_char = (unsigned char)s1[i];
		s2_char = (unsigned char)s2[i];
		cmp = s1_char - s2_char;
		return (cmp);
	}
	return (0);
}
