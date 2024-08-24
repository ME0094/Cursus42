/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:37:37 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Reverses the order of elements in a stack
 * by rotating it in the opposite direction.
 */
void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;
	t_stack	*before_tail;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	tail = get_stack_bottom(*stack);
	before_tail = get_stack_penultimate(*stack);
	if (before_tail == NULL)
		return ;
	temp = *stack;
	*stack = tail;
	(*stack)->next = temp;
	before_tail->next = NULL;
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
