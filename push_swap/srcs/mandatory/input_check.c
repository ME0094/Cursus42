/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:54 by martirod          #+#    #+#             */
/*   Updated: 2024/09/06 13:26:49 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Checks if the given argument is a number.
 */
static int	is_number(char *arg)
{
	int	index;

	index = 0;
	if (arg[0] == '\0')
		return (0);
	if (ft_issign(arg[index]) && arg[index + 1] != '\0')
		index++;
	while (arg[index])
	{
		if (!ft_isdigit(arg[index]))
			return (0);
		index++;
	}
	return (1);
}

/**
 * Checks if there are any duplicates in the given array of numbers.
 */
static int	has_duplicates(int *numbers, int value, int size)
{
	int	index;

	index = 1;
	while (index < size)
	{
		if (value == numbers[index])
			return (1);
		index++;
	}
	return (0);
}

/**
 * Helper function for input validation.
 */
int	ft_help_function(char **args, int *numbers, int index)
{
	int	current_num;

	while (args[index])
	{
		if (!is_number(args[index]))
		{
			free(numbers);
			return (0);
		}
		numbers[index] = ft_atoi_ps(args[index]);
		current_num = numbers[index];
		if (has_duplicates(numbers, current_num, index))
		{
			free(numbers);
			return (0);
		}
		index++;
	}
	return (1);
}

/**
* Checks if the input is correct.
*/
int	validate_input(char **args, int count)
{
	int	index;
	int	*numbers;
	int	zero_count;

	zero_count = 0;
	index = 1;
	numbers = malloc(sizeof(int) * count);
	if (!ft_help_function(args, numbers, index))
		return (0);
	free(numbers);
	if (zero_count > 1)
		return (0);
	return (1);
}
