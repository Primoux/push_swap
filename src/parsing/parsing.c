/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:12:36 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/05 23:22:16 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing(int ac, char **av, t_list_db_cir **stack_a)
{
	if (check_arg(ac, av, stack_a) == 1)
		return (1);
	if (check_duplicate(*stack_a) == 1)
		return (1);
	return (0);
}
