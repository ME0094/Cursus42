/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 18:04:18 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	int	current;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	current = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = current;
	current = (*stack_a)->index;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->index = current;
	write(1, "sa\n", 3);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;

	if (!*stack_b)
		return ;
	current = *stack_b;
	*stack_b = (*stack_b)->next;
	current->next = *stack_a;
	*stack_a = current;
	write(1, "pa\n", 3);
}

void	ft_ra(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*current2;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	current = (*stack_a)->next;
	current2 = *stack_a;
	while (current2->next)
		current2 = current2->next;
	current2->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = current;
	write(1, "ra\n", 3);
}

void	ft_rra(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*previous;

	if ((*stack_a) && (*stack_a)->next)
	{
		current = (*stack_a);
		previous = NULL;
		while (current->next)
		{
			previous = current;
			current = current->next;
		}
		previous->next = NULL;
		current->next = *stack_a;
		*stack_a = current;
	}
	write(1, "rra\n", 4);
}
