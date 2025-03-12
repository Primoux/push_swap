/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:12:36 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/12 17:47:36 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	parsing(int ac, char **av, t_list_db_cir **stack_a)
{
	t_list_db_cir	*stack_b;

	stack_b = NULL;
	if (check_arg(ac, av, stack_a) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (check_duplicate(*stack_a) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (check_index_sorted(*stack_a) == 0)
		return (1);
	if (ft_lstsize_db_cir(*stack_a) <= 25)
		little_sort(stack_a, &stack_b);
	else
		start_algo(stack_a, &stack_b);
	return (0);
}
