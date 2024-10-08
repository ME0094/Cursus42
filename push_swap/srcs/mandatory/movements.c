/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:37:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:55:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Performs a reverse rotate operation on both stacks
 * until the cost of both stacks is non-negative.
 */
static void	rev_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	if (*cost_a >= 0 || *cost_b >= 0)
		return ;
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		reverse_rotate_both(a, b);
	}
}

/**
 * Performs a simultaneous rotation of both stacks.
 */
static void	do_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	if (!a || !b || !cost_a || !cost_b || *cost_a <= 0 || *cost_b <= 0)
		return ;
	while (*cost_a > 0 && *cost_b > 0)
	{
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

void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rotate_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_rotate_both(a, b, &cost_a, &cost_b);
	do_rotate_a(a, &cost_a);
	do_rotate_b(b, &cost_b);
	push_to_a(a, b);
}
