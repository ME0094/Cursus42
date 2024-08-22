/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:32 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:02:19 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Moves the top element from the source stack to the destination stack.
 */
void push(t_stack **src, t_stack **dest)
{
    // Check if source stack is empty or pointers are invalid
    if (src == NULL || dest == NULL || *src == NULL)
        return;

    t_stack *temp = (*src)->next; // Store the next element of source stack

    (*src)->next = *dest; // Link the current top of source to the top of destination
    *dest = *src; // Move the top element from source to destination
    *src = temp; // Update the top of source stack to the next element
}

/**
 * Pushes the top element from stack_b to stack_a.
 */
void	push_to_a(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

/**
 * Pushes the top element from stack A to stack B.
 */
void	push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pb\n");
}
