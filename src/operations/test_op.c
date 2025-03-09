/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:41:51 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/09 18:13:46 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	check_index(t_list_db_cir *stack)
{
	t_list_db_cir	*tmp;
	unsigned int	i;

	i = 0;
	tmp = stack;
	if (tmp->index != i)
		return (1);
	tmp = tmp->next;
	i++;
	while (tmp != stack)
	{
		if (tmp->index != i)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

int	test_op(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	print_stack(*stack_a, *stack_b);
	if (check_index(*stack_a) == 0)
		return (1);
	return (0);
}
