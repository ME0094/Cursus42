/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:32 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:35:08 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Moves the top element from the source stack to the destination stack.
 */
void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (src == NULL || dest == NULL || *src == NULL)
		return ;
	temp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = temp;
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
