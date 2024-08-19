/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:43:41 by martirod          #+#    #+#             */
/*   Updated: 2024/08/19 18:49:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (stack)
	{
		while ((*stack) != NULL)
		{
			tmp = *stack;
			(*stack) = (*stack)->next;
			free(tmp);
		}
	}
}

void free_all(t_stack **stack_a, t_stack **stack_b, int *tab)
{
		free_stack(stack_a);
		free_stack(stack_b);
	if (tab)
		free(tab);
}
