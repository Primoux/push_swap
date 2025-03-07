/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 20:46:00 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*-------------------------------- INCLUDES --------------------------------*/

/*-------------------------------- DEFINES --------------------------------*/

/*-------------------------------- PARSING --------------------------------*/

int		parsing(int ac, char **av, t_list_db_cir **stack_a);
int		check_arg(int ac, char **av, t_list_db_cir **stack_a);
void	print_stack(t_list_db_cir *stack_a, t_list_db_cir *stack_b);
int		check_duplicate(t_list_db_cir *stack);

/*-------------------------------- OPERATIONS --------------------------------*/
void	test_op(t_list_db_cir **stack);
void	swap(t_list_db_cir *stack);
void	double_swap(t_list_db_cir *sa, t_list_db_cir *sb);
void	push(t_list_db_cir **stack_sender, t_list_db_cir **stack_receiver);

#endif