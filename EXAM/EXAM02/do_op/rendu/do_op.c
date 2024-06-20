/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:36:48 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/20 09:01:22 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		left_operand;
	char	operator;
	int		right_operand;
	int		result;

	if (argc - 1 == 3)
	{
		left_operand = atoi(argv[1]);
		operator = *argv[2];
		right_operand = atoi(argv[3]);
		result = 0;
		if (operator == '+')
			result = left_operand + right_operand;
		else if (operator == '-')
			result = left_operand - right_operand;
		else if (operator == '*')
			result = left_operand * right_operand;
		else if (operator == '/' && right_operand != 0)
			result = left_operand / right_operand;
		else if (operator == '%' && right_operand != 0)
			result = left_operand % right_operand;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
}
