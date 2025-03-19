/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:22 by enchevri          #+#    #+#             */
/*   Updated: 2025/03/19 18:51:43 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str, long *nb)
{
	int	sign;

	sign = 1;
	*nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		*nb = *nb * 10 + (*str - 48);
		if (sign == 1 && (*nb > INT_MAX))
			return (1);
		str++;
	}
	*nb = *nb * sign;
	if (sign == -1 && *nb < INT_MIN)
		return (1);
	return (0);
}
