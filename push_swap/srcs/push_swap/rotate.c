/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:50:23 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:04:29 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Rotates the stack by moving the top element to the bottom.
 */
void rotate(t_stack **stack)
{
    // Check if stack is empty or has only one element
    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    t_stack *temp = *stack; // Store the current top of the stack
    *stack = (*stack)->next; // Move the top to the next element

    t_stack *tail = get_stack_bottom(*stack); // Get the bottom element of the stack

    temp->next = NULL; // Set the old top's next to NULL
    tail->next = temp; // Link the old top to the bottom
}


/**
 * Rotate the elements of stack A.
 */
void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

/**
 * Rotate the elements in stack B.
 */
void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

/**
 * Rotates both stack A and stack B.
 */
void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
