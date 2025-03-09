/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:43:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/07 19:03:18 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	push(t_list_db_cir **stack_sender, t_list_db_cir **stack_receiver)
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
	ft_lstadd_back_db_cir(stack_receiver, node_send);
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
