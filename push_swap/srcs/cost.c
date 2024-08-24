/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:43:41 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:00:35 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Calculates the cost for each element in stack B based on its position
 *  and target position in stack A.
 */
void	calculate_costs(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current_a;
	t_stack	*current_b;
	int		size_a;
	int		size_b;

	current_a = *stack_a;
	current_b = *stack_b;
	size_a = get_stack_size(current_a);
	size_b = get_stack_size(current_b);
	while (current_b)
	{
		current_b->cost_b = current_b->pos;
		if (current_b->pos > size_b / 2)
			current_b->cost_b = (size_b - current_b->pos) * -1;
		current_b->cost_a = current_b->target_pos;
		if (current_b->target_pos > size_a / 2)
			current_b->cost_a = (size_a - current_b->target_pos) * -1;
		current_b = current_b->next;
	}
}

/**
 * Performs the cheapest move between two stacks.
 */
void	execute_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *stack_b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (abs_val(tmp->cost_a) + abs_val(tmp->cost_b) < abs_val(cheapest))
		{
			cheapest = abs_val(tmp->cost_b) + abs_val(tmp->cost_a);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	do_move(stack_a, stack_b, cost_a, cost_b);
}
