/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:33:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/12 18:27:44 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Swaps the top two elements of both stack A and stack B.
 */
void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
		ft_sa(stack_a);
	if (stack_b && *stack_b && (*stack_b)->next)
		ft_sb(stack_b);
	write(1, "ss\n", 3);
}

/**
 * Rotates both stacks in a circular manner 
 * by moving the top element of each stack to the bottom.
 */
void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
		ft_ra(stack_a);
	if (stack_b && *stack_b && (*stack_b)->next)
		ft_rb(stack_b);
	write(1, "rr\n", 3);
}

/**
 * Reverses both stacks 
 * by performing a reverse rotation on both stack A and stack B.
 */
void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
		ft_rra(stack_a);
	if (stack_b && *stack_b && (*stack_b)->next)
		ft_rrb(stack_b);
	write(1, "rrr\n", 4);
}
