/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 21:00:19 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Calculates the length of a null-terminated array of strings.
 */
int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i] != NULL)
		i++;
	return (i);
}

/**
 * Sorts an integer array in ascending order.
 */
void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

/**
 * Returns the index of the minimum value in the given stack.
 */
int	get_index_of_min(t_stack *stack_a)
{
	int	minimum_value;
	int	minimum_position;
	int	current_position;

	minimum_value = INT_MAX;
	minimum_position = 0;
	current_position = 0;
	while (stack_a)
	{
		if (stack_a->value < minimum_value)
		{
			minimum_value = stack_a->value;
			minimum_position = current_position;
		}
		stack_a = stack_a->next;
		current_position++;
	}
	return (minimum_position);
}
