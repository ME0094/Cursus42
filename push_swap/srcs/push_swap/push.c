/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:32 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 21:12:20 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rb_or_rrb(t_stack **stack_b, int size)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_b;
	while (tmp)
	{
		if (tmp->index == size)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void sort_three(t_stack **stack_a) {
    int a = (*stack_a)->value;
    int b = (*stack_a)->next->value;
    int c = (*stack_a)->next->next->value;

    if (a >= b && b <= c && a <= c) {
        ft_sa(stack_a);
    } else if (a > b && b > c) {
        ft_sa(stack_a);
        ft_rra(stack_a);
    } else if (a >= b && b <= c && a >= c) {
        ft_ra(stack_a);
	} else if (a <= b && b >= c && a <= c) {
		ft_sa(stack_a);
		ft_ra(stack_a);
    } else if (a <= b && b >= c && a >= c) {
        ft_rra(stack_a);
    }
}

int	find_min(t_stack *stack_a)
{
	int	min;

	min = stack_a->value;
	while (stack_a)
	{
		if (stack_a->value < min)
			min = stack_a->value;
		stack_a = stack_a->next;
	}
	return (min);
}

void	push_smallest_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		min;
	int		min_index;

	tmp = *stack_a;
	min = find_min(*stack_a);
	min_index = find_minimum_index(&tmp);
	if (min_index > ft_lstsize(*stack_a) / 2)
	{
		while ((*stack_a)->value != min)
			ft_rra(stack_a);
	}
	else
	{
		while ((*stack_a)->value != min)
			ft_ra(stack_a);
	}
	ft_pb(stack_a, stack_b);
}

void	sorting_five_numbers(t_stack **stack_a, t_stack **stack_b)
{
	push_smallest_to_b(stack_a, stack_b);
	push_smallest_to_b(stack_a, stack_b);
	sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
