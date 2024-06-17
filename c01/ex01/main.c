/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:17:11 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/06/17 08:55:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimate_ft.h"
#include "ft_putnbr.h"

int	main(void)
{
	int	n;
	int	********ptr;

	ptr = malloc(sizeof(int *******));
	*ptr = malloc(sizeof(int ******));
	**ptr = malloc(sizeof(int *****));
	***ptr = malloc(sizeof(int ****));
	****ptr = malloc(sizeof(int ***));
	*****ptr = malloc(sizeof(int **));
	******ptr = malloc(sizeof(int *));
	*******ptr = &n;
	ft_ultimate_ft(&ptr);
	ft_putnbr(********ptr);
	free(*******ptr);
	free(******ptr);
	free(*****ptr);
	free(****ptr);
	free(***ptr);
	free(**ptr);
	free(*ptr);
	free(ptr);
	return (0);
}
