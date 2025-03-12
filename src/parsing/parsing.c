/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:12:36 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/12 17:32:40 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing(int ac, char **av, t_list_db_cir **stack_a)
{
	t_list_db_cir	*stack_b;

	stack_b = NULL;
	if (check_arg(ac, av, stack_a) == 1)
	{
		ft_printf("Error\nWrong arg\n");
		return (1);
	}
	if (check_duplicate(*stack_a) == 1)
		return (1);
	if (check_index_sorted(*stack_a) == 0)
		return (1);
	if (ft_lstsize_db_cir(*stack_a) <= 25)
		little_sort(stack_a, &stack_b);
	else
		start_algo(stack_a, &stack_b);
	return (0);
}
