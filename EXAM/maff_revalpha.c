/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:25:12 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/17 16:29:17 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int		i;
	char	c;

	i = 26;
	while (i >= 1)
	{
		if (i % 2 == 0)
			c = i - 1 + 97;
		else
			c = i - 1 + 65;
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}