/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:43:41 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:10:03 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Calculates the cost for each element in stack B based on its position
 *  and target position in stack A.
 */
void	calculate_costs(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	size_a = get_stack_size(tmp_a);
	size_b = get_stack_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b = tmp_b->next;
	}
}

/**
 * Performs the cheapest move between two stacks.
 */
void	execute_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
	
    if (!stack_a || !stack_b) {
        return;
    }

    t_stack *tmp = *stack_b;
    int cheapest = INT_MAX;
    int cost_a = 0;
    int cost_b = 0;

    while (tmp) {
        int total_cost = absolute_value(tmp->cost_a) + absolute_value(tmp->cost_b);
        if (total_cost < absolute_value(cheapest)) {
            cheapest = total_cost;
            cost_a = tmp->cost_a;
            cost_b = tmp->cost_b;
        }
        tmp = tmp->next;
    }

    do_move(stack_a, stack_b, cost_a, cost_b);
}
