/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:54:02 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Frees the memory allocated for a stack.
 */
void	free_stack(t_stack **stack)
{
	t_stack	*current_node;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		current_node = (*stack)->next;
		free(*stack);
		*stack = current_node;
	}
	*stack = NULL;
}

/**
 * Exits the program with an error message
 *  and frees the memory allocated for the stacks.
 */
void	handle_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a)
		free_stack(stack_a);
	if (stack_b && *stack_b)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

/**
 * Converts a string to a long integer.
 */
long int	ft_atoi_ps(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

/**
 * Calculates the absolute value of a given integer.
 */
int	abs_val(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
