/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:43:10 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/05 23:04:27 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list_db_cir *stack)
{
	t_list_db_cir	*tmp;

	tmp = stack;
	ft_printf("Stack [%d]: %d\n", stack->index, stack->content);
	stack = stack->next;
	while (stack != tmp)
	{
		ft_printf("Stack [%d]: %d\n", stack->index, stack->content);
		stack = stack->next;
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
	print_stack(stack_a);
	ft_lstclear_db_cir(&stack_a);
	return (0);
}
