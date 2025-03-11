/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:54:40 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/11 20:09:31 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	rotate(t_list_db_cir **stack, int i)
{
	if (i == 1)
		*stack = (*stack)->prev;
	else
		*stack = (*stack)->next;
}

void	rotate_a(t_list_db_cir **stack_a)
{
	rotate(stack_a, 0);
	ft_printf("ra\n");
}

void	rotate_b(t_list_db_cir **stack_b)
{
	rotate(stack_b, 0);
	ft_printf("rb\n");
}

void	reverse_rotate_a(t_list_db_cir **stack_a)
{
	reverse_rotate(stack_a, 1);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list_db_cir **stack_b)
{
	reverse_rotate(stack_b, 1);
	ft_printf("rrb\n");
}
