/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/07 20:26:30 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	int	tmp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = tmp;
	tmp = (*stack_a)->index;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->index = tmp;
	write(1, "sa\n", 3);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	ft_ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next;
	tmp2 = *stack_a;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = tmp;
	write(1, "ra\n", 3);
}

void	ft_rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*prev;

	if ((*stack_a) && (*stack_a)->next)
	{
		tmp = (*stack_a);
		prev = NULL;
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		prev->next = NULL;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	write(1, "rra\n", 4);
}
