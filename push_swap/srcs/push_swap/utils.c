/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 18:13:21 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

/**
 * Calculates the length of a null-terminated array of strings.
 */
int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
		i++;
	return (i);
}

/**
 * Sorts an integer array in ascending order.
 */
void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < ((size - 1)))
	{
		j = 0;
		while (j < ((size) - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i--;
	}
}

/**
 * Returns the index of the minimum value in the given stack.
 */
int	get_index_of_min(t_stack **stack_a)
{
	t_stack	*current;
	int		minimum_value;
	int		minimum_position;
	int		current_position;

	current = *stack_a;
	minimum_value = find_minimum(current);
	minimum_position = 0;
	current_position = 0;
	while (current)
	{
		if (current->value == minimum_value)
		{
			minimum_position = current_position;
			break ;
		}
		current = current->next;
		current_position++;
	}
	return (minimum_position);
}
