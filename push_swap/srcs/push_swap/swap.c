/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:26:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/21 17:22:47 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Swaps the values and indices of two adjacent nodes in a stack.
 */
static void	swap(t_stack *stack)
{
	int	tmp_value;
	int	tmp_index;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp_value = stack->value;
	tmp_index = stack->index;
	stack->value = stack->next->value;
	stack->index = stack->next->index;
	stack->next->value = tmp_value;
	stack->next->index = tmp_index;
}

/**
 * Perform a swap operation on the top two elements of stack A.
 */
void	sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}

/**
 * Swaps the top two elements of stack B.
 */
void	sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

/**
 * Performs a simultaneous swap operation on two stacks.
 */
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}
