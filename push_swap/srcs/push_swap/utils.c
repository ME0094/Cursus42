/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 17:08:23 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

/**
 * Converts a string to a long long integer.
 */
long long int	ft_atoll(const char *nbr)
{
	int				i;
	int				sign;
	long long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nbr[i] && (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13)))
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i++] == '-')
			sign = -1;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		if (result > (LLONG_MAX - (nbr[i] - '0')) / 10)
			return (LLONG_MIN);
		result = result * 10 + (nbr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	validate_arg(char **tab)
{
	int	i;
	int	j;

	i = 0;
	if (!tab[i])
		return (1);
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if ((tab[i][j] == '-' && j != 0) || (tab[i][j] == '-' && !tab[i][j
					+ 1]))
				return (1);
			if ((tab[i][j] < '0' || tab[i][j] > '9') && (tab[i][j] != '-'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
