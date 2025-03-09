/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:35:23 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/07 18:50:17 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	swap(t_list_db_cir *stack)
{
	int	tmp;

	if (stack)
	{
		tmp = stack->content;
		stack->content = stack->next->content;
		stack->next->content = tmp;
	}
}
void	double_swap(t_list_db_cir *stack_a, t_list_db_cir *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	swap_a(t_list_db_cir *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_list_db_cir *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}
