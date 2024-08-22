/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:20:42 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Fills a stack with values from command line arguments.
 */
t_stack *initialize_stack(int ac, char **av) {
    t_stack *stack_a = NULL;
    int i = 1;

    while (i < ac) {
        long int nb = ft_atoi_ps(av[i]);

        // Check for overflow/underflow and exit if necessary
        if (nb > INT_MAX || nb < INT_MIN) {
            handle_error(&stack_a, NULL);
        }

        // Create a new stack element and add it to the bottom
		t_stack	*new_element = create_stack_node((int)nb);

        if (stack_a == NULL) {
            stack_a = new_element;
        } else {
            add_node_to_stack_bottom(&stack_a, new_element);
        }

        i++;
    }

    return stack_a;
}



/**
 * Assigns an index to each element in the stack.
 * The index represents the position of the element in the stack.
 */
void assign_index(t_stack *stack_a, int stack_size)
{
    t_stack *ptr;
    t_stack *highest;
    int value;

    while (--stack_size > 0)
    {
        ptr = stack_a;
        value = INT_MIN;
        highest = NULL;

        while (ptr)
        {
            if (ptr->index == 0 && ptr->value > value)
            {
                value = ptr->value;
                highest = ptr;
            }
            ptr = ptr->next;
        }

        if (highest != NULL)
        {
            highest->index = stack_size;
        }
    }
}
