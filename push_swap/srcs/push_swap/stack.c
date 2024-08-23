/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:26:43 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:53:19 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Returns the bottom element of the stack.
 */
t_stack	*get_stack_bottom(t_stack *stack)
{
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}

/**
 * Returns the node before the bottom node in the stack.
 */
t_stack	*get_stack_penultimate(t_stack *stack)
{
	while (stack && stack->next && stack->next->next)
		stack = stack->next;
	return (stack);
}

/**
 * Creates a new stack node with the given value.
 */
t_stack	*create_stack_node(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

/**
 * Adds a new element to the bottom of the stack.
 */
void	add_node_to_stack_bottom(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tail = get_stack_bottom(*stack);
	tail->next = new;
}

/**
 * Get the size of a stack.
 */
int	get_stack_size(t_stack	*stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
