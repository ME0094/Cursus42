/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:50:23 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 18:29:13 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Adds a new node to the back of a stack.
 */
void	ft_stack_add_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*current;

	current = *stack;
	if (current == NULL)
	{
		*stack = new_node;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = new_node;
}

/**
 * Creates a new stack node with the given data and position.
 */
t_stack	*ft_stack_new(int position)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->value = position;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

/**
 * Calculates the size of a stack.
 */
int	ft_stack_size(t_stack *stack)
{
	int		size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
