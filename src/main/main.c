/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:43:10 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 20:40:01 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list_db_cir *stack_a, t_list_db_cir *stack_b)
{
	t_list_db_cir	*tmp_a;
	t_list_db_cir	*tmp_b;

	tmp_a = stack_a;
	tmp_b = stack_b;
	if (stack_a)
	{
		ft_printf("Stack_a [%d]: %d\t", stack_a->index, stack_a->content);
		stack_a = stack_a->next;
	}
	if (stack_b)
	{
		ft_printf("Stack_b [%d]: %d\n", stack_b->index, stack_b->content);
		stack_b = stack_b->next;
	}
	ft_printf("\n");
	while (stack_a != tmp_a || stack_b != tmp_b)
	{
		if (stack_a != tmp_a)
		{
			ft_printf("Stack_a [%d]: %d", stack_a->index, stack_a->content);
			stack_a = stack_a->next;
		}
		if (stack_b != tmp_b)
		{
			ft_printf("Stack_b [%d]: %d", stack_b->index, stack_b->content);
			stack_b = stack_b->next;
		}
		ft_printf("\n");
	}
}

int	main(int argc, char **argv)
{
	t_list_db_cir	*stack_a;

	stack_a = NULL;
	if (parsing(argc, argv, &stack_a) == 1)
	{
		ft_lstclear_db_cir(&stack_a);
		return (1);
	}
	ft_lstclear_db_cir(&stack_a);
	return (0);
}
