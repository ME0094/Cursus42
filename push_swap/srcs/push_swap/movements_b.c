/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 16:25:06 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sb(t_stack **stack_b)
{
	int	current;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	current = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = current;
	current = (*stack_b)->index;
	(*stack_b)->index = (*stack_b)->next->index;
	(*stack_b)->next->index = current;
	write(1, "sb\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;

	if (!*stack_a)
		return ;
	current = *stack_a;
	*stack_a = (*stack_a)->next;
	current->next = *stack_b;
	*stack_b = current;
	write(1, "pb\n", 3);
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*current2;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	current = (*stack_b)->next;
	current2 = (*stack_b);
	while (current2->next)
		current2 = current2->next;
	current2->next = (*stack_b);
	(*stack_b) = current;
	write(1, "rb\n", 3);
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*current2;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	current = (*stack_b);
	while (current->next->next)
		current = current->next;
	current2 = current->next;
	current->next = NULL;
	current2->next = (*stack_b);
	(*stack_b) = current2;
	write(1, "rrb\n", 4);
}
