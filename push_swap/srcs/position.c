/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:22 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:46:09 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Assigns a position to each element in the stack.
 *
 */
void	get_position(t_stack **stack)
{
	t_stack	*current_node;
	int		position_index;

	if (stack == NULL || *stack == NULL)
		return ;
	current_node = *stack;
	position_index = 0;
	while (current_node != NULL)
	{
		current_node->pos = position_index++;
		current_node = current_node->next;
	}
}

/**
 * Get the lowest index position in the stack.
 */
int	find_lowest_index_position(t_stack **stack)
{
	t_stack	*current;
	int		lowest_index;
	int		lowest_pos;
	int		current_pos;

	if (stack == NULL || *stack == NULL)
		return (-1);
	current = *stack;
	lowest_index = INT_MAX;
	lowest_pos = 0;
	current_pos = 0;
	while (current != NULL)
	{
		if (current->index < lowest_index)
		{
			lowest_index = current->index;
			lowest_pos = current_pos;
		}
		current = current->next;
		current_pos++;
	}
	return (lowest_pos);
}

/**
 * Finds the target position in the stack based on the given parameters.
 */
static int	get_target(t_stack **a, int base_ix, int target_ix, int target_pos)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index > base_ix && tmp_a->index < target_ix)
		{
			target_ix = tmp_a->index;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	if (target_ix != INT_MAX)
		return (target_pos);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index < target_ix)
		{
			target_ix = tmp_a->index;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (target_pos);
}

/**
 * Calculates the target position for each element in stack B
 * based on their index.
 */
void	determine_target_positions(t_stack **a, t_stack **b)
{
	t_stack	*current_b;

	if (a == NULL || *a == NULL || b == NULL || *b == NULL)
		return ;
	current_b = *b;
	get_position(a);
	get_position(b);
	while (current_b != NULL)
	{
		current_b->target_pos = get_target(a, current_b->index, INT_MAX, 0);
		current_b = current_b->next;
	}
}
