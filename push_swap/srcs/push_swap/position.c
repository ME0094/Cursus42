/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:22 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:01:01 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Assigns a position to each element in the stack.
 *
 */
void get_position(t_stack **stack) {
    if (stack == NULL || *stack == NULL) {
        return;
    }

    t_stack *current = *stack;
    int index = 0;

    while (current != NULL) {
        current->pos = index++;
        current = current->next;
    }
}

/**
 * Get the lowest index position in the stack.
 */
int find_lowest_index_position(t_stack **stack) {
    if (stack == NULL || *stack == NULL) {
        return -1; // Return an invalid position if the stack is empty or null
    }

    t_stack *current = *stack;
    int lowest_index = INT_MAX;
    int lowest_pos = 0;
    int current_pos = 0;

    while (current != NULL) {
        if (current->index < lowest_index) {
            lowest_index = current->index;
            lowest_pos = current_pos;
        }
        current = current->next;
        current_pos++;
    }

    return lowest_pos;
}


/**
 * Finds the target position in the stack based on the given parameters.
 */
static int	get_target(t_stack **a, int b_idx, int target_idx, int target_pos)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index > b_idx && tmp_a->index < target_idx)
		{
			target_idx = tmp_a->index;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	if (target_idx != INT_MAX)
		return (target_pos);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index < target_idx)
		{
			target_idx = tmp_a->index;
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
void determine_target_positions(t_stack **a, t_stack **b)
{
	t_stack	*current_b;
	
	if (a == NULL || *a == NULL || b == NULL || *b == NULL)
		return; // Return if either stack is null
	current_b = *b;

    get_position(a);
    get_position(b);

    while (current_b != NULL) {
        current_b->target_pos = get_target(a, current_b->index, INT_MAX, 0);
        current_b = current_b->next;
    }
}
