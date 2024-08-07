/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:32 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 20:51:30 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Modify the index of the stack to choose between rr or rrb.
 */
int	rr_or_rrb(t_stack **stack_b, int size)
{
	int		index;
	t_stack	*current;

	index = 0;
	current = *stack_b;
	if (!current)
		return (-1);
	while (current)
	{
		if (current->index == size)
			return (index);
		current = current->next;
		index++;
	}
	return (-1);
}

/**
 * Sorts a three numbers stack.
 */
void	sorting_three_numbers(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b)
		ft_sa(stack_a);
	if (b > c)
	{
		if (a > c)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
}

/**
 * Finds the minimum value in a given stack.
 */
int	find_minimum(t_stack *stack_a)
	{
	int	minimum_value;

	minimum_value = INT_MAX;
	while (stack_a)
	{
		if (stack_a->value < minimum_value)
			minimum_value = stack_a->value;
		stack_a = stack_a->next;
	}
	return (minimum_value);
}

/**
 * Pushes the smallest element from stack A to stack B.
 */
void	push_smallest_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	int		min;
	int		min_index;

	current = *stack_a;
	min = find_minimum(*stack_a);
	min_index = get_index_of_min(current);
	if (min_index > ft_stack_size(*stack_a) / 2)
	{
		while ((*stack_a)->value != min)
			ft_rra(stack_a);
	}
	else
	{
		while ((*stack_a)->value != min)
			ft_ra(stack_a);
	}
	ft_pb(stack_a, stack_b);
}

/**
 * Sorts a five numbers stack.
 */
void	sorting_five_numbers(t_stack **stack_a, t_stack **stack_b)
{
	push_smallest_to_b(stack_a, stack_b);
	push_smallest_to_b(stack_a, stack_b);
	sorting_three_numbers(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
