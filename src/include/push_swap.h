/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/09 18:12:27 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
/*-------------------------------- INCLUDES --------------------------------*/

/*-------------------------------- DEFINES --------------------------------*/

/*-------------------------------- PARSING --------------------------------*/

int		parsing(int ac, char **av, t_list_db_cir **stack_a);
int		check_arg(int ac, char **av, t_list_db_cir **stack_a);
void	print_stack(t_list_db_cir *stack_a, t_list_db_cir *stack_b);
int		check_duplicate(t_list_db_cir *stack);

/*-------------------------------- OPERATIONS --------------------------------*/
int		test_op(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
void	swap_a(t_list_db_cir *stack_a);
void	swap_b(t_list_db_cir *stack_b);

void	double_swap(t_list_db_cir *sa, t_list_db_cir *sb);
void	push_a(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
void	push_b(t_list_db_cir **stack_a, t_list_db_cir **stack_b);

#endif