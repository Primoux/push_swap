/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:43:10 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/26 19:00:35 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list_db_cir	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (EXIT_SUCCESS);
	if (parsing(argc, argv, &stack_a) == 1)
	{
		ft_lstclear_db_cir(&stack_a);
		return (EXIT_FAILURE);
	}
	ft_lstclear_db_cir(&stack_a);
	return (EXIT_SUCCESS);
}
