/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:06:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/11 15:40:22 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	sort_three(t_list_db_cir **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->index;
	b = (*stack_a)->next->index;
	c = (*stack_a)->next->next->index;
	if (a > b && b < c && a < c)
		swap_a(*stack_a);
	else if (a > b && b > c)
	{
		swap_a(*stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (a > b && b < c && a > c)
		rotate_a(stack_a);
	else if (a < b && b > c && a < c)
	{
		swap_a(*stack_a);
		rotate_a(stack_a);
	}
	else if (a < b && b > c && a > c)
		reverse_rotate_a(stack_a);
}

static void	push_smallest(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	t_list_db_cir	*current;
	int				min_pos;
	int				min;
	int				i;
	int				size;

	size = ft_lstsize_db_cir(*stack_a);
	min = (*stack_a)->index;
	min_pos = 0;
	current = *stack_a;
	i = 0;
	while (i < size)
	{
		if (current->index < min)
		{
			min = current->index;
			min_pos = i;
		}
		current = current->next;
		i++;
	}
	if (min_pos <= size / 2)
		while (min_pos-- > 0)
			rotate_a(stack_a);
	else
		while (min_pos++ < size)
			reverse_rotate_a(stack_a);
	push_b(stack_a, stack_b);
}

void	little_sort(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	int	size;

	size = ft_lstsize_db_cir(*stack_a);
	if (size <= 1)
		return ;
	else if (size == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			swap_a(*stack_a);
	}
	else if (size == 3)
		sort_three(stack_a);
	else if (size <= 5)
	{
		while (ft_lstsize_db_cir(*stack_a) > 3)
			push_smallest(stack_a, stack_b);
		sort_three(stack_a);
		while (*stack_b)
			push_a(stack_a, stack_b);
	}
}
