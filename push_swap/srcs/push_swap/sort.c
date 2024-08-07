/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:32 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 17:58:44 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_or_rrb(t_stack *stack_b, int size)
{
	int	index;

	index = 0;
	if (!stack_b)
		return (-1);
	while (stack_b)
	{
		if (stack_b->index == size)
			return (index);
		stack_b = stack_b->next;
		index++;
	}
	return (-1);
}

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
