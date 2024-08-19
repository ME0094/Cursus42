/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 18:49:10 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sa(t_stack **stack_a) {
	if (!*stack_a || !(*stack_a)->next) {
		return;
	}

	t_stack *top_node = *stack_a;
	t_stack *next_node = (*stack_a)->next;

	int top_value = top_node->value;
	int top_index = top_node->index;

	top_node->value = next_node->value;
	top_node->index = next_node->index;

	next_node->value = top_value;
	next_node->index = top_index;

	write(1, "sa\n", 3);
}

void ft_pa(t_stack **stack_a, t_stack **stack_b) {
	if (!*stack_b) {
		return;
	}

	t_stack *pushed_element = *stack_b;
	*stack_b = (*stack_b)->next;
	pushed_element->next = *stack_a;
	*stack_a = pushed_element;

	write(1, "pa\n", 3);
}

void ft_ra(t_stack **stack_a) {
	if (!*stack_a || !(*stack_a)->next) {
		return;
	}

	t_stack *second_element = (*stack_a)->next;
	t_stack *last_element = *stack_a;

	// Find the last element
	while (last_element->next) {
		last_element = last_element->next;
	}

	last_element->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = second_element;

	write(1, "ra\n", 3);
}

void ft_rra(t_stack **stack_a) {
	if (!*stack_a || !(*stack_a)->next) {
		return;
	}

	t_stack *current_node = *stack_a;
	t_stack *previous_node = NULL;

	while (current_node->next) {
		previous_node = current_node;
		current_node = current_node->next;
	}

	previous_node->next = NULL;
	current_node->next = *stack_a;
	*stack_a = current_node;

	write(1, "rra\n", 4);
}
