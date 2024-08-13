/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:42:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 23:08:01 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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

/**
 * Validates the arguments in the tab array.
 */
int	ft_validate_arg(char **tab)
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

int	ft_has_doubles(t_stack **stack_a)
{
	t_stack	*current_node;
	t_stack	*checker_node;

	current_node = *stack_a;
	if (!current_node)
		return (0);
	while (current_node->next)
	{
		checker_node = current_node->next;
		while (checker_node)
		{
			if (current_node->value == checker_node->value)
				return (1);
			checker_node = checker_node->next;
		}
		current_node = current_node->next;
	}
	return (0);
}

int	ft_is_sorted(t_stack *stack_a)
{
	int	previous_value;

	previous_value = INT_MIN;
	while (stack_a)
	{
		if (stack_a->value < previous_value)
			return (ft_printf("Error\n"), exit(1), 1);
		previous_value = stack_a->value;
		stack_a = stack_a->next;
	}
	return (1);
}
