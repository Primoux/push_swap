/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:20:25 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/21 18:27:03 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	is_valid_argument(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if ((!(str[i] >= '0' && str[i] <= '9')) || (str[i + 1] && \
			(str[i + 1] == '-' || str[i + 1] == '+')))
			return (1);
		i++;
	}
	return (0);
}

static int	split_arg(char *av, t_list_db_cir **stack_a)
{
	int				y;
	char			**tmp;
	t_list_db_cir	*new_node;
	long			nb;

	tmp = ft_split(av, ' ');
	if (!tmp)
		return (1);
	y = 0;
	if (tmp[0] == NULL)
		return ((void)(free_tab(tmp)), 1);
	while (tmp[y])
	{
		if (is_valid_argument(tmp[y]) == 1 || ft_atoi(tmp[y], &nb) != 0)
			return ((void)(free_tab(tmp)), 1);
		new_node = ft_lstnew_db_cir(nb);
		if (!new_node)
			return ((void)(free_tab(tmp)), 1);
		ft_lstadd_back_db_cir(stack_a, new_node);
		y++;
	}
	free_tab(tmp);
	return (0);
}

static void	put_sorted_index(t_list_db_cir *stack, int ac)
{
	int				i;
	int				content;
	int				count_bigger;
	t_list_db_cir	*tmp;

	i = 0;
	while (i < ac)
	{
		count_bigger = 0;
		tmp = stack->next;
		content = stack->content;
		while (tmp != stack)
		{
			if (content < tmp->content)
				count_bigger++;
			tmp = tmp->next;
		}
		stack->index = (ac - 1) - count_bigger;
		stack = stack->next;
		i++;
	}
}

int	check_arg(int ac, char **av, t_list_db_cir **stack_a)
{
	int				i;
	t_list_db_cir	*tmp;

	i = 1;
	while (i < ac)
	{
		if (split_arg(av[i], stack_a) == 1)
			return (1);
		i++;
	}
	tmp = (*stack_a)->next;
	i = 1;
	while (tmp != *stack_a)
	{
		i++;
		tmp = tmp->next;
	}
	put_sorted_index(*stack_a, i);
	return (0);
}
