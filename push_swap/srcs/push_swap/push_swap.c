/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:22 by martirod          #+#    #+#             */
/*   Updated: 2024/08/14 18:25:34 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push_to_stack_a(t_stack **stack_a, char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		ft_stack_add_back(stack_a, ft_stack_new(ft_atoi(tab[i])));
	return (0);
}

void	get_index(t_stack **stack_a, int *tab)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp != NULL)
	{
		i = 0;
		while (i < ft_stack_size(*stack_a))
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
		tab = ft_stack_to_array(*stack_a);
		sort_int_tab(tab, size);
		get_index(stack_a, tab);
		if (size <= 100)
			sorting_hundred(stack_a, stack_b, size);
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
	if (ft_is_sorted(stack_a))
		return (ft_free_stack(&stack_a), 0);
	choose_algo(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
