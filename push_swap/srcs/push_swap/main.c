/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:42:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:27:54 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Checks if a stack is sorted in ascending order.
 */
int	is_stack_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}


/**
 * Executes the push_swap algorithm on the given stacks.
 */
static void push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size) {
    if (stack_size <= 2) {
        // Handle small stack sizes efficiently
        if (stack_size == 2 && !is_stack_sorted(*stack_a)) {
            swap_a(stack_a);
        }
    } else {
        // Sort for larger stack sizes
        if (!is_stack_sorted(*stack_a)) {
            sort_stack(stack_a, stack_b);
        }
    }
}

/**
 * The main function of the program.
 *
 * It takes command line arguments
 * and performs operations on the stacks.
 */
int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (!validate_input(av, ac))
		handle_error(NULL, NULL);
	stack_a = initialize_stack(ac, av);
	if (!stack_a)
		handle_error(NULL, NULL);
	stack_size = get_stack_size(stack_a);
	assign_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

