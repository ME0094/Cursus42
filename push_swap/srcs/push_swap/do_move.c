/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:37:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:19:04 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Performs a reverse rotate operation on both stacks
 * until the cost of both stacks is non-negative.
 */
static void do_rev_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b) {
    // Ensure both costs are negative before starting the loop
    if (*cost_a >= 0 || *cost_b >= 0) {
        return;
    }

    // Perform reverse rotations until at least one cost becomes non-negative
    while (*cost_a < 0 && *cost_b < 0) {
        (*cost_a)++;
        (*cost_b)++;
        reverse_rotate_both(a, b);
    }
}

/**
 * Performs a simultaneous rotation of both stacks.
 */
static void do_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b) {
    // Ensure both costs are positive before starting the loop
    if (!a || !b || !cost_a || !cost_b || *cost_a <= 0 || *cost_b <= 0) {
        return;
    }

    // Perform simultaneous rotations until at least one cost becomes non-positive
    while (*cost_a > 0 && *cost_b > 0) {
        rotate_both(a, b);
        (*cost_a)--;
        (*cost_b)--;
    }
}


/**
 * Performs a rotation operation on stack A.
 */
static void	do_rotate_a(t_stack **a, int *cost)
{
	while (*cost != 0)
	{
		if (*cost > 0)
		{
			rotate_a(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate_a(a);
			(*cost)++;
		}
	}
}

/**
 * Performs a rotation operation on stack B.
 */
static void	do_rotate_b(t_stack **b, int *cost)
{
	while (*cost != 0)
	{
		if (*cost > 0)
		{
			rotate_b(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate_b(b);
			(*cost)++;
		}
	}
}

void do_move(t_stack **a, t_stack **b, int cost_a, int cost_b) {
    // Handle different cases based on the costs
    if (cost_a < 0 && cost_b < 0) {
        do_rev_rotate_both(a, b, &cost_a, &cost_b);
    } else if (cost_a > 0 && cost_b > 0) {
        do_rotate_both(a, b, &cost_a, &cost_b);
    }

    // Perform rotations for each stack
    do_rotate_a(a, &cost_a);
    do_rotate_b(b, &cost_b);

    // Perform the push operation
    push_to_a(a, b);
}
