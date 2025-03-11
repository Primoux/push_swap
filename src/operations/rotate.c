/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:54:40 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/11 15:25:35 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	reverse_rotate(t_list_db_cir **stack)
{
	*stack = (*stack)->prev;
}

static void	rotate(t_list_db_cir **stack)
{
	*stack = (*stack)->next;
}

void	rotate_a(t_list_db_cir **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rotate_b(t_list_db_cir **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	reverse_rotate_a(t_list_db_cir **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list_db_cir **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}
