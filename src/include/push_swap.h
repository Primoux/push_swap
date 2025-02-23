/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:19:48 by enchevri          #+#    #+#             */
/*   Updated: 2025/02/23 19:06:50 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*-------------------------------- INCLUDES --------------------------------*/

/* Standard Libraries */
# include <stdlib.h>

/*-------------------------------- DEFINES --------------------------------*/

# define GOOD_ARG "0123456789-+"

int	parsing(int count, char **arg);
int	check_arg(int count, char **arg);

#endif