/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:06:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/07/06 16:27:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			brainfuck(char *code);
unsigned char	*init_language(void);
void			go_to_matching_bracket_left(char **code);
void			go_to_matching_bracket_right(char **code);
