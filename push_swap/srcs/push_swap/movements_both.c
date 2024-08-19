/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:33:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 17:17:20 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
	write(1, "ss\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	write(1, "rr\n", 3);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	write(1, "rrr\n", 4);
}
