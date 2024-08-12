/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:22 by martirod          #+#    #+#             */
/*   Updated: 2024/08/12 18:57:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push_to_stack_a(t_stack **stack_a, char **tab)
{
	int		i;
	t_stack	*new_node;

	if (!stack_a || !tab)
		return (1);
	i = 0;
	while (tab[i])
	{
		new_node = ft_stack_new(ft_atoll(tab[i]));
		if (!new_node)
			return (1);
		ft_stack_add_back(stack_a, new_node);
		i++;
	}
	return (0);
}

void	get_index(t_stack **stack_a, int *tab)
{
	int		i;
	int		stack_size;
	t_stack	*tmp;

	if (!stack_a || !*stack_a || !tab)
		return ;
	stack_size = ft_stack_size(*stack_a);
	tmp = *stack_a;
	while (tmp != NULL)
	{
		i = 0;
		while (i < stack_size)
		{
			if (tmp->value == tab[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}

void	choose_algo(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	*tab;

	tab = NULL;
	size = ft_stack_size(*stack_a);
	if (!*stack_a)
		return ;
	else if (size == 2)
		sorting_two_numbers(stack_a);
	else if (size == 3)
		sorting_three_numbers(stack_a);
	else if (size == 5)
		sorting_five_numbers(stack_a, stack_b);
	else
	{
		tab = ft_create_array_from_stack(stack_a);
		sort_int_tab(tab, size);
		get_index(stack_a, tab);
		if (size <= 100)
			sorting_to_hundred(stack_a, stack_b, size);
		else
			sorting(stack_a, stack_b, size);
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	if (ft_init_stack(&stack_a, argc, argv) == 1)
		return (1);
	if (ft_is_sorted(stack_a) == 1)
		return (1);
	choose_algo(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
