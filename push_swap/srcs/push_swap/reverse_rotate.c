/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:04:00 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Reverses the order of elements in a stack
 * by rotating it in the opposite direction.
 */
void reverse_rotate(t_stack **stack)
{
    // Check if stack is empty or has only one element
    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    t_stack *tail = get_stack_bottom(*stack); // Get the bottom element of the stack
    t_stack *before_tail = get_stack_penultimate(*stack); // Get the element before the bottom

    // Check if before_tail is valid
    if (before_tail == NULL)
        return;

    t_stack *temp = *stack; // Store the current top of the stack

    *stack = tail; // Move the bottom element to the top
    (*stack)->next = temp; // Link the new top to the old top
    before_tail->next = NULL; // Set the new bottom's next to NULL
}


/**
 * Reverses the order of elements in the stack A.
 */
void	reverse_rotate_a(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr("rra\n");
}

/**
 * Reverses the order of elements in stack B.
 */
void	reverse_rotate_b(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr("rrb\n");
}

/**
 * Reverses the order of elements in both stack A and stack B.
 */
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr\n");
}
