/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:20:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/02/25 19:26:42 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	good_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' '))
			return (1);
		i++;
		if (str[i] == ' ')
		{
			i++;
		}
	}
	return (0);
}

int	split_arg(char *av, t_list_db_cir *stack_a)
{
	int		x;
	int		y;
	char	**tpm;

	tpm = ft_split(av, ' ');
	y = 0;
	x = 0;
	while (tpm[y])
	{
		ft_lstadd_back_db_cir(&stack_a, ft_lstnew_db_cir(tpm[y]));
		y++;
	}
	return (1);
}

int	check_arg(int ac, char **av, t_list_db_cir *stack_a)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_printf("av[%d] = %s\n", i, av[i]);
		if (good_arg(av[i]) == 1)
		{
			ft_printf("Wrong arg : %s\n", av[i]);
			return (1);
		}
		else
		{
			split_arg(av[i], stack_a);
			ft_printf("Good arg : %s\n", av[i]);
		}
		i++;
	}
	return (0);
}