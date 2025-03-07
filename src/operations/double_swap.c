/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:46:20 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 19:48:41 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void double_swap(t_list_db_cir *sa, t_list_db_cir *sb)
{
    swap(sa);
    swap(sb);
}
