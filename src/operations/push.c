/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:43:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/11 20:06:47 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	push(t_list_db_cir **stack_sender, t_list_db_cir **stack_receiver)
{
	t_list_db_cir	*node_send;

	if (*stack_sender == NULL)
		return ;
	node_send = *stack_sender;
	if (node_send->next == node_send)
		*stack_sender = NULL;
	else
	{
		*stack_sender = node_send->next;
		node_send->prev->next = node_send->next;
		node_send->next->prev = node_send->prev;
	}
	ft_lstadd_front_db_cir(stack_receiver, node_send);
}

void	push_back(t_list_db_cir **stack_a, t_list_db_cir **stack_b, int i)
{
	int	size;

	size = ft_lstsize_db_cir(*stack_b);
	while (size != 0)
	{
		if (((*stack_b)->index) & (1 << (i + 1)))
			push_a(stack_a, stack_b);
		else
			rotate_b(stack_b);
		size--;
	}
}

void	push_a(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
