/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:20:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/06 20:04:12 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	is_valid_argument(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if ((!(str[i] >= '0' && str[i] <= '9')) || (str[i + 1] && (str[i
					+ 1] == '-' || str[i + 1] == '+')))
			return (1);
		i++;
	}
	return (0);
}

int	split_arg(char *av, t_list_db_cir **stack_a)
{
	int				y;
	char			**tmp;
	t_list_db_cir	*new_node;
	long			nb;

	tmp = ft_split(av, ' ');
	if (!tmp)
		return (0);
	y = 0;
	if (tmp[0] == NULL)
		return (1);
	while (tmp[y])
	{
		if (is_valid_argument(tmp[y]) == 1 || ft_atoi(tmp[y], &nb) != 0)
		{
			free_tab(tmp);
			return (1);
		}
		new_node = ft_lstnew_db_cir(nb);
		if (!new_node)
		{
			free_tab(tmp);
			return (1);
		}
		ft_lstadd_back_db_cir(stack_a, new_node);
		y++;
	}
	free_tab(tmp);
	return (0);
}

void	put_index(t_list_db_cir *stack)
{
	int				i;
	t_list_db_cir	*tmp;

	i = 1;
	tmp = stack;
	stack->index = 0;
	stack = stack->next;
	while (tmp != stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}

int	check_arg(int ac, char **av, t_list_db_cir **stack_a)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (split_arg(av[i], stack_a) == 1)
			return (1);
		i++;
	}
	put_index(*stack_a);
	return (0);
}
