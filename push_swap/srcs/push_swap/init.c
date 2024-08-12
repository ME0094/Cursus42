/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:37:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/12 16:39:31 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Creates an array from a stack.
 */
int	*ft_create_array_from_stack(t_stack **stack_a)
{
	t_stack	*current;
	int		*array;
	int		size;
	int		index;

	index = 0;
	current = *stack_a;
	if (!stack_a)
		return (NULL);
	size = ft_stack_size(*stack_a);
	array = (int *)calloc(size, sizeof(int));
	if (!array)
		return (NULL);
	while (current)
	{
		array[index++] = current->value;
		current = current->next;
	}
	free_stack(stack_a);
	return (array);
}

/**
 * Initializes the stack with values from command line arguments.
 */
int	ft_init_stack(t_stack **stack_a, int argc, char **argv)
{
	int		index;
	int		token_count;
	char	**tab;

	index = 0;
	token_count = 0;
	while (++index < argc)
	{
		tab = ft_split(argv[index], token_count);
		if (!tab)
			return (-1);
		if (ft_validate_arg(tab) == 1)
			return (free(tab), free_stack(stack_a),
				write(2, "Error\n", 6), 1);
		push_to_stack_a(stack_a, tab);
		free(tab);
	}
	if (ft_has_doubles(stack_a) == 1)
		return (free_stack(stack_a), write(2, "Error\n", 6), 1);
	return (0);
}
