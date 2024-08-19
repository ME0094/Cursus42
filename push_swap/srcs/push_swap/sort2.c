/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 21:11:31 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pushing_back_to_a(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	mediane;
	int	location;

	location = 0;
	mediane = 0;
	size -= 1;
	while (*stack_b != NULL)
	{
		mediane = (size + 1) / 2;
		location = rb_or_rrb(stack_b, size);
		if ((*stack_b)->index == size)
		{
			ft_pa(stack_a, stack_b);
			size--;
		}
		else if (location <= mediane && (*stack_b)->index != size)
			ft_rb(stack_b);
		else if (location > mediane && (*stack_b)->index != size)
			ft_rrb(stack_b);
	}
}

void	sorting_to_hundred(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i && i > 1)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + 15))
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra(stack_a);
	}
	pushing_back_to_a(stack_a, stack_b, size);
}

void	sort_two(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		ft_sa(stack_a);
}

void	sorting(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i && i > 1)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + 28))
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra(stack_a);
	}
	pushing_back_to_a(stack_a, stack_b, size);
}
