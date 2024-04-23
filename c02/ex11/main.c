/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:19:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/04/10 12:38:02 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include "ft_putstr.h"
#include "ft_putstr_non_printable.h"
#include <unistd.h>

int	main(void)
{
	char	src1[14];
	char	src2[21];
	char	str1[32];
	char	str2[2];
	char	str3[132];
	char	str4[3];
	int		i;
	int		j;

	ft_strcpy(src1, "Hello World !");
	ft_putstr_non_printable(src1);
	write(1, "\n", 1);
	src2[0] = 'C';
	src2[1] = 'o';
	src2[2] = 'u';
	src2[3] = 'c';
	src2[4] = 'o';
	src2[5] = 'u';
	src2[6] = '\n';
	src2[7] = 't';
	src2[8] = 'u';
	src2[9] = ' ';
	src2[10] = 'v';
	src2[11] = 'a';
	src2[12] = 's';
	src2[13] = ' ';
	src2[14] = 'b';
	src2[15] = 'i';
	src2[16] = 'e';
	src2[17] = 'n';
	src2[18] = ' ';
	src2[19] = '?';
	src2[20] = '\0';
	ft_putstr_non_printable(src2);
	write(1, "\n", 1);
	i = 0;
	j = 1;
	while (i < 32)
	{
		str1[i] = j;
		i++;
		j++;
	}
	str1[i] = '\0';
	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	str2[0] = 127;
	str2[1] = '\0';
	ft_putstr_non_printable(str2);
	write(1, "\n", 1);
	i = 0;
	j = 127;
	while (j <= 256)
	{
		str3[i] = j;
		i++;
		j++;
	}
	str3[i] = '\0';
	ft_putstr_non_printable(str3);
	write(1, "\n", 1);
	str4[0] = 31;
	str4[1] = 32;
	str4[2] = '\0';
	ft_putstr_non_printable(str4);
	write(1, "\n", 1);
	return (0);
}
