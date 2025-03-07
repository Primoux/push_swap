/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:35:23 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 20:51:23 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	swap(t_list_db_cir *stack)
{
	int	tmp;

	if (stack)
	{
		tmp = stack->content;
		stack->content = stack->next->content;
		stack->next->content = tmp;
		ft_printf("sa\n");
	}
}
