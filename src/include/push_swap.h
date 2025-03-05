/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/02/25 18:36:34 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*-------------------------------- INCLUDES --------------------------------*/

/*-------------------------------- DEFINES --------------------------------*/

typedef struct s_content
{
	int					index;
	int					content;
}						t_content;



/*-------------------------------- PARSING --------------------------------*/

int						parsing(int ac, char **av, t_list_db_cir *stack_a);
int						check_arg(int ac, char **av, t_list_db_cir *stack_a);

#endif