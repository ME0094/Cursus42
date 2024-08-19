/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:44:02 by martirod          #+#    #+#             */
/*   Updated: 2024/08/15 21:05:42 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
		i++;
	return (i);
}

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < ((size) - 1))
	{
		j = 0;
		while (j < ((size) - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	find_minimum_index(t_stack **stack_a)
{
	t_stack	*current;
	int		minimum_value;
	int		minimum_position;
	int		current_position;

	current = *stack_a;
	minimum_value = find_min(current);
	minimum_position = 0;
	current_position = 0;
	while (current)
	{
		if (current->value == minimum_value)
		{
			minimum_position = current_position;
			break ;
		}
		current = current->next;
		current_position++;
	}
	return (minimum_position);
}
