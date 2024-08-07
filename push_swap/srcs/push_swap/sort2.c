/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 20:55:27 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Pushes back elements from stack B to stack A.
 */
void	pushing_back_to_a(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	median;
	int	location;

	median = size / 2;
	while (*stack_b)
	{
		location = rr_or_rrb(stack_b, size);
		if (location <= median)
			ft_rb(stack_b);
		else
			ft_pa(stack_a, stack_b);
		size--;
	}
}

/**
 * Sorts the stack.
 */
void	sorting_to_hundred(t_stack **stack_a, t_stack **stack_b, int size)
{
	while (*stack_a)
	{
		if ((*stack_a)->index == 0)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
		}
		else
			ft_pb(stack_a, stack_b);
	}
	pushing_back_to_a(stack_a, stack_b, size);
}

/**
 * Sorts two numbers in ascending order.
 */
void	sorting_two_numbers(t_stack **stack_a)
{
	if (!*stack_a || !(*stack_a)->next)
		return ;
	if ((*stack_a)->value > (*stack_a)->next->value)
		ft_sa(stack_a);
}

/**
 * Sorts the stacks using a specific algorithm.
 */
void	sorting(t_stack **stack_a, t_stack **stack_b, int size)
{
	while (*stack_a)
	{
		if ((*stack_a)->index == 0)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
		}
		else
			ft_pb(stack_a, stack_b);
	}
	pushing_back_to_a(stack_a, stack_b, size);
}
