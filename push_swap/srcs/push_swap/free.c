/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:43:41 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 18:28:23 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Frees the stack's allocated memory.
 */
void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

/**
 * Frees the memory used by two stacks and an integer array.
 */
void	ft_free_all(t_stack **stack_a, t_stack **stack_b, int *array)
{
	if (stack_a)
		ft_free_stack(stack_a);
	if (stack_b)
		ft_free_stack(stack_b);
	if (array)
		free(array);
}
