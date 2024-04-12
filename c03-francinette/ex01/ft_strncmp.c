/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:50:48 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/12 09:56:33 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	s1_char;
	unsigned char	s2_char;
	int				cmp;

	i = 0;
	while (i < n)
	{
		s1_char = (unsigned char)s1[i];
		s2_char = (unsigned char)s2[i];
		if (s1_char != s2_char)
		{
			cmp = s1_char - s2_char;
			return (cmp);
		}
		if (s1_char == '\0' || s2_char == '\0')
			return (0);
		i++;
	}
	return (0);
}
