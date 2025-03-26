/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:41:51 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/26 14:10:03 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_byteshift(t_list_db_cir *stack_a)
{
	int	i;
	int	y;

	i = ft_lstsize_db_cir(stack_a);
	y = 0;
	while (i != 0)
	{
		i = i >> 1;
		y++;
	}
	return (y);
}

static void	sort_byte(t_list_db_cir **stack_a, t_list_db_cir **stack_b, int i)
{
	int	size;

	size = ft_lstsize_db_cir(*stack_a);
	while (size != 0)
	{
		if (((*stack_a)->index) & (1 << i))
			rotate_a(stack_a);
		else
		{
			push_b(stack_a, stack_b);
		}
		size--;
	}
}

int	start_algo(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	int	max_byteshift;
	int	i;

	i = 0;
	max_byteshift = count_byteshift(*stack_a);
	while (i < max_byteshift && check_index_sorted(*stack_a) == 1)
	{
		sort_byte(stack_a, stack_b, i);
		if (i != (max_byteshift - 1))
			push_back(stack_a, stack_b, i);
		else
		{
			while (*stack_b)
				push_a(stack_a, stack_b);
		}
		i++;
	}
	return (0);
}
