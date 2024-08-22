/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:26:33 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:15:28 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Pushes elements from stack A to stack B
 * until there are only three elements left in stack A.
 */
void push_all_save_three(t_stack **stack_a, t_stack **stack_b)
{
    int total_size;
    int elements_pushed;
    int index;

    total_size = get_stack_size(*stack_a);
    elements_pushed = 0;
    index = 0;
    while (total_size > 6 && index < total_size && elements_pushed < total_size / 2)
    {
        if ((*stack_a)->index <= total_size / 2)
        {
            push_to_b(stack_a, stack_b); // Push to stack_b
            elements_pushed++;
        }
        else
        {
            rotate_a(stack_a); // Rotate stack_a
        }
        index++;
    }
    while (total_size - elements_pushed > 3)
    {
        push_to_b(stack_a, stack_b); // Push to stack_b
        elements_pushed++;
    }
}


/**
 * Finds the highest index in a given stack.
 */
static int find_highest_index(t_stack *stack)
{
    if (!stack)
        return -1; // Return an error value if the stack is empty

    int highest_index = stack->index;
    t_stack *current = stack->next;

    while (current)
    {
        if (current->index > highest_index)
            highest_index = current->index;
        current = current->next;
    }

    return highest_index;
}

/**
 * Sorts a small stack in ascending order.
 */
void sort_small_stack(t_stack **stack)
{
    if (!stack || !*stack || is_stack_sorted(*stack))
        return;

    int highest = find_highest_index(*stack);

    if ((*stack)->index == highest)
    {
        rotate_a(stack);
    }
    else if ((*stack)->next && (*stack)->next->index == highest)
    {
        reverse_rotate_a(stack);
    }

    if ((*stack)->index > (*stack)->next->index)
    {
        swap_a(stack);
    }
}


/**
 * Shifts the elements of a stack
 * to position the lowest index elementat the top.
 */
static void	shift_stack(t_stack **stack_a)
{
	int	lowest_pos;
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	stack_size = get_stack_size(*stack_a);
	lowest_pos = find_lowest_index_position(stack_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			reverse_rotate_a(stack_a);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			rotate_a(stack_a);
			lowest_pos--;
		}
	}
}

/**
 * Sorts the stacks using a specific algorithm.
 */
void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	push_all_save_three(stack_a, stack_b);
	sort_small_stack(stack_a);
	while (*stack_b)
	{
		determine_target_positions(stack_a, stack_b);
		calculate_costs(stack_a, stack_b);
		execute_cheapest_move(stack_a, stack_b);
	}
	if (!is_stack_sorted(*stack_a))
		shift_stack(stack_a);
}
