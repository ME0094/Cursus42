/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 18:53:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sb(t_stack **stack_b) {
    if (!*stack_b || !(*stack_b)->next) {
        return;
    }

    int top_value = (*stack_b)->value;
    int top_index = (*stack_b)->index;

    (*stack_b)->value = (*stack_b)->next->value;
    (*stack_b)->index = (*stack_b)->next->index;

    (*stack_b)->next->value = top_value;
    (*stack_b)->next->index = top_index;

    write(1, "sb\n", 3);
}

void ft_pb(t_stack **stack_a, t_stack **stack_b) {
    if (!*stack_a) {
        return;
    }

    t_stack *pushed_element = *stack_a;
    *stack_a = (*stack_a)->next;
    pushed_element->next = *stack_b;
    *stack_b = pushed_element;

    write(1, "pb\n", 3);
}

void ft_rb(t_stack **stack_b) {
    if (!*stack_b || !(*stack_b)->next) {
        return;
    }

    t_stack *second_element = (*stack_b)->next;
    t_stack *last_element = *stack_b;

    // Find the last element
    while (last_element->next) {
        last_element = last_element->next;
    }

    last_element->next = *stack_b;
    (*stack_b)->next = NULL;
    *stack_b = second_element;

    write(1, "rb\n", 3);
}

void ft_rrb(t_stack **stack_b) {
    if (!*stack_b || !(*stack_b)->next) {
        return;
    }

    t_stack *current_node = *stack_b;
    t_stack *last_node = NULL;

    // Find the second-to-last element
    while (current_node->next->next) {
        current_node = current_node->next;
    }

    last_node = current_node->next;
    current_node->next = NULL;
    last_node->next = *stack_b;
    *stack_b = last_node;

    write(1, "rrb\n", 4);
}
