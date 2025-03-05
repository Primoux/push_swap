/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/05 23:22:12 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*-------------------------------- INCLUDES --------------------------------*/

/*-------------------------------- DEFINES --------------------------------*/

/*-------------------------------- PARSING --------------------------------*/

int		parsing(int ac, char **av, t_list_db_cir **stack_a);
int		check_arg(int ac, char **av, t_list_db_cir **stack_a);
void	print_stack(t_list_db_cir *stack);
int		check_duplicate(t_list_db_cir *stack);

#endif