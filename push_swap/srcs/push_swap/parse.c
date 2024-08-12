/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:42:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/12 18:44:33 by martirod         ###   ########.fr       */
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

	if (!nbr)
		return (0);
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

	if (!tab)
		return (1);
	i = 0;
	while (tab[i])
	{
		if (!tab[i] || tab[i][0] == '\0')
			return (1);
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '-')
			{
				if (j != 0 || !tab[i][j + 1])
					return (1);
			}
			else if (tab[i][j] < '0' || tab[i][j] > '9')
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

	if (!stack_a || !*stack_a)
		return (0);
	current_node = *stack_a;
	while (current_node)
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

	if (!stack_a)
		return (1);
	previous_value = INT_MIN;
	while (stack_a)
	{
		if (stack_a->value < previous_value)
		{
			ft_printf("Error\n");
			return (0);
		}
		previous_value = stack_a->value;
		stack_a = stack_a->next;
	}
	return (1);
}
