/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:37:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 21:01:34 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int *create_tab(t_stack *stack_a)
{
	t_stack	*current;
	int		*array;
	int		index;

	index = 0;
	current = stack_a;
	if (!stack_a)
		return (NULL);
	array = malloc(sizeof(int) * ft_lstsize(stack_a));
	if (!array)
		return (NULL);
	while (current)
	{
		array[index++] = (current)->value;
		(current) = (current)->next;
	}
	return (array);
}

int	initialize_stack(t_stack **stack_a, int argc, char **argv)
{
	int		i;
	int		n;
	char	**tab;

	i = 0;
	while (++i < argc)
	{
		tab = ft_split(argv[i], " ", &n);
		if (ft_validate_argument(tab) == 1)
			return (freetab(tab), free_stack(stack_a),
				write(2, "Error\n", 6), 1);
		push_to_a(stack_a, tab);
		freetab(tab);
	}
	if (has_duplicates(stack_a) == 1)
		return (free_stack(stack_a), write(2, "Error\n", 6), 1);
	return (0);
}
