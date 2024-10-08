/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:32:41 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Fills a stack with values from command line arguments.
 */
t_stack	*initialize_stack(int argc, char **argv)
{
	t_stack		*stack;
	long int	number;
	int			index;

	stack = NULL;
	index = 1;
	while (index < argc)
	{
		number = ft_atoi_ps(argv[index]);
		if (number > INT_MAX || number < INT_MIN)
			handle_error(&stack, NULL);
		if (index == 1)
			stack = create_stack_node((int)number);
		else
			add_node_to_stack_bottom(&stack, create_stack_node((int)number));
		index++;
	}
	return (stack);
}

/**
 * Assigns an index to each element in the stack.
 * The index represents the position of the element in the stack.
 */
void	assign_index(t_stack *stack, int size)
{
	t_stack	*current_node;
	t_stack	*max_node;
	int		max_value;

	while (--size > 0)
	{
		current_node = stack;
		max_node = NULL;
		max_value = INT_MIN;
		while (current_node)
		{
			if (current_node->index == 0 && current_node->value > max_value)
			{
				max_value = current_node->value;
				max_node = current_node;
			}
			current_node = current_node->next;
		}
		if (max_node != NULL)
			max_node->index = size;
	}
}
