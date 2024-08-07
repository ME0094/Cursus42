/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 17:36:53 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
