/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:06:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/26 14:10:07 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

static int	search_smallest(t_list_db_cir *stack)
{
	t_list_db_cir	*tmp;
	int				min_pos;
	int				min;
	int				i;
	int				size;

	if (!stack)
		return (0);
	size = ft_lstsize_db_cir(stack);
	tmp = stack;
	min = tmp->index;
	min_pos = 0;
	i = -1;
	while (++i < size)
	{
		if (tmp->index < min)
		{
			min = tmp->index;
			min_pos = i;
		}
		tmp = tmp->next;
	}
	return (min_pos);
}

static void	push_smallest(t_list_db_cir **stack_a)
{
	int	min_pos;
	int	size;

	size = ft_lstsize_db_cir(*stack_a);
	min_pos = 0;
	min_pos = search_smallest(*stack_a);
	if (min_pos <= size / 2)
		while (min_pos--)
			rotate_a(stack_a);
	else
		while (min_pos++ < size)
			reverse_rotate_a(stack_a);
}

void	little_sort(t_list_db_cir **stack_a, t_list_db_cir **stack_b)
{
	int	size;

	size = ft_lstsize_db_cir(*stack_a);
	if (size == 2)
		swap_a(*stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else
	{
		while (ft_lstsize_db_cir(*stack_a) > 3)
		{
			push_smallest(stack_a);
			if (check_index_sorted(*stack_a) == 1)
				push_b(stack_a, stack_b);
			else
				break ;
		}
		size = ft_lstsize_db_cir(*stack_a);
		if (size == 3)
			sort_three(stack_a);
		while (*stack_b)
			push_a(stack_a, stack_b);
	}
}
