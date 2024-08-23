/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:50:23 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:40:22 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Rotates the stack by moving the top element to the bottom.
 */
void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	tail = get_stack_bottom(*stack);
	temp->next = NULL;
	tail->next = temp;
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
