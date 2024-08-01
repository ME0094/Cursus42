/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:50:23 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:19:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Adds a new node to the back of a stack.
 */
void	ft_stack_add_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*current;

	if (!stack || !new_node)
		return (false);
	if (!*stack)
	{
		*stack = new_node;
		return (true);
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (true);
}

/**
 * Creates a new stack node with the given data and position.
 */
t_stack	*ft_stack_new(int data, int position)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = data;
	new_node->index = position;
	new_node->next = NULL;
	return (new_node);
}

/**
 * Calculates the size of a stack.
 */
int	ft_stack_size(t_stack *head)
{
	int		count;
	t_stack	*current;

	count = 0;
	current = head;
	while (head)
	{
		current = current->next;
		count++;
	}
	return (count);
}
