/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 16:30:57 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Pushes back elements from stack B to stack A.
 */
void	pushing_back_a(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	median;
	int	location;

	median = 0;
	location = 0;
	size -= 1;
	while (*stack_b != NULL)
	{
		median = (size + 1) / 2;
		location = rb_or_rrb(stack_b, size);
		if ((*stack_b)->index == size)
		{
			ft_pa(stack_a, stack_b);
			size--;
		}
		else if (location <= median && (*stack_b)->index != size)
			ft_rb(stack_b);
		else if (location > median && (*stack_b)->index != size)
			ft_rrb(stack_b);
	}
}

/**
 * Sorts the stack.
 */
void	sorting_hundred(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i && i > 1)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + 15))
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra(stack_a);
	}
	pushing_back_a(stack_a, stack_b, size);
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
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i && i > 1)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + 28))
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra(stack_a);
	}
	pushing_back_a(stack_a, stack_b, size);
}
