/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:20:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/02/23 20:16:42 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	is(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-' && c == '+'))
		return (1);
	return (0);
}

int	check_arg(int count, char **arg)
{
	int	i;

	i = 1;
	while (i < count)
	{
		if (!is(*arg[i]))
		{
			ft_printf("Wrong char : %s\n", arg[i]);
			return (1);
		}
		i++;
	}
	return (0);
}
