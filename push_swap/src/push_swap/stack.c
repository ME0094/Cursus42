/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:50:23 by martirod          #+#    #+#             */
/*   Updated: 2024/07/31 17:22:55 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
