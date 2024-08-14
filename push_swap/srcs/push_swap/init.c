/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:37:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 20:14:49 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Creates an array from a stack.
 */
int	*ft_stack_to_array(t_stack *stack_a)
{
	t_stack	*current;
	int		*array;
	int		index;

	index = 0;
	current = stack_a;
	if (!stack_a)
		return (NULL);
	array = malloc(sizeof(int) * ft_stack_size(stack_a));
	if (!array)
		return (NULL);
	while (current)
	{
		array[index++] = (current)->value;
		(current) = (current)->next;
	}
	return (array);
}

/**
 * Initializes the stack with values from command line arguments.
 */
int	ft_init_stack(t_stack **stack_a, int argc, char **argv)
{
	int		index;
	int		token_count;
	int		total_size;
	char	**array;

	index = 1;
	total_size = 0;
	while (index < argc)
	{
		array = ft_split(argv[index], " ", &token_count);
		if (array == NULL)
			return (ft_free_stack(stack_a), write(2, "Error\n", 6), 1);
		if (ft_validate_arg(array) == 1)
			return (free(array), ft_free_stack(stack_a),
				write(2, "Error\n", 6), 1);
		if (push_to_stack_a(stack_a, array) == 1)
			return (free(array), ft_free_stack(stack_a),
				write(2, "Error\n", 6), 1);
		total_size += token_count;
	}
	if (ft_check_duplicates(stack_a) == 1)
		return (ft_free_stack(stack_a), write(2, "Error\n", 6), 1);
	return (0);
}
