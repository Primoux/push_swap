/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:41:51 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 20:45:50 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	test_op(t_list_db_cir **stack_a)
{
	t_list_db_cir	*stack_b;

	stack_b = NULL;
	ft_printf("-----Before swap----\n");
	print_stack(*stack_a, stack_b);
	ft_printf("-----After swap-----\n");
	push(*stack_a, stack_b);
	print_stack(*stack_a, stack_b);
	ft_printf("--------------------\n");
}
