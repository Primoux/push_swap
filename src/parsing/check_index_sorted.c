/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_index_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:00:20 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/26 14:10:11 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_index_sorted(t_list_db_cir *stack)
{
	t_list_db_cir	*tmp;
	int				i;

	i = stack->index;
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
