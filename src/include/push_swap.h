/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/11 17:57:16 by enchevri         ###   ########lyon.fr   */
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
int		check_index_sorted(t_list_db_cir *stack);

int		start_algo(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
void	little_sort(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
/*-------------------------------- OPERATIONS --------------------------------*/

void	swap_a(t_list_db_cir *stack_a);
void	swap_b(t_list_db_cir *stack_b);
void	double_swap(t_list_db_cir *sa, t_list_db_cir *sb);
void	push_a(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
void	push_b(t_list_db_cir **stack_a, t_list_db_cir **stack_b);
void	push_back(t_list_db_cir **stack_a, t_list_db_cir **stack_b, int i);
void	rotate_a(t_list_db_cir **stack_a);
void	reverse_rotate_a(t_list_db_cir **stack_a);
void	rotate_b(t_list_db_cir **stack_b);
void	reverse_rotate_b(t_list_db_cir **stack_b);

#endif
