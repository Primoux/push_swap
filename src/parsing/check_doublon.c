/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:17:53 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/26 14:10:14 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(t_list_db_cir *stack)
{
	t_list_db_cir	*current;
	t_list_db_cir	*temp;
	t_list_db_cir	*head;

	if (!stack)
		return (0);
	head = stack;
	current = stack;
	while (current->next != head)
	{
		temp = current->next;
		while (temp != head)
		{
			if (temp->content == current->content)
				return (1);
			temp = temp->next;
		}
		current = current->next;
	}
	return (0);
}
