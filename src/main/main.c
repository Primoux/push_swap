/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:43:10 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/09 18:17:03 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list_db_cir *stack_a, t_list_db_cir *stack_b)
{
	t_list_db_cir	*tmp_a;
	t_list_db_cir	*tmp_b;

	ft_printf("-----------------------PRINT_STACK--------------------------\n");
	tmp_a = stack_a;
	tmp_b = stack_b;
	if (stack_a)
	{
		ft_printf("Stack_a [%d]: %d\t\t", stack_a->index, stack_a->content);
		stack_a = stack_a->next;
	}
	else
	{
		ft_printf("\t\t");
	}
	if (stack_b)
	{
		ft_printf("Stack_b [%d]: %d\t\t", stack_b->index, stack_b->content);
		stack_b = stack_b->next;
	}
	ft_printf("\n");
	while (stack_a != tmp_a || stack_b != tmp_b)
	{
		if (stack_a != tmp_a)
		{
			ft_printf("Stack_a [%d]: %d\t\t", stack_a->index, stack_a->content);
			stack_a = stack_a->next;
		}
		else
		{
			ft_printf("\t\t\t");
		}
		if (stack_b != tmp_b)
		{
			ft_printf("Stack_b [%d]: %d\t\t", stack_b->index, stack_b->content);
			stack_b = stack_b->next;
		}
		ft_printf("\n");
	}
	ft_printf("------------------------------------------------------------\n");
}

int	main(int argc, char **argv)
{
	t_list_db_cir	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (1);
	if (parsing(argc, argv, &stack_a) == 1)
	{
		ft_lstclear_db_cir(&stack_a);
		return (1);
	}
	ft_lstclear_db_cir(&stack_a);
	return (0);
}
