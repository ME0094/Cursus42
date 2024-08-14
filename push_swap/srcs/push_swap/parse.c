/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:42:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 20:15:24 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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

int	ft_check_duplicates(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*runner;

	if (!*stack_a)
		return (0);
	current = *stack_a;
	while (current != NULL)
	{
		runner = current->next;
		while (runner != NULL)
		{
			if (current->value == runner->value)
			{
				ft_free_stack(stack_a);
				return (1);
			}
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}

int	ft_is_sorted(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!*stack_a)
		return (ft_printf("Error\n"), exit(1), 1);
	tmp = *stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (ft_free_stack(stack_a), 1);
}
