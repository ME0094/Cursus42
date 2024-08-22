/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:25:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/22 19:27:03 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * Checks if the given argument is a number.
 */
static int	arg_is_number(char *av)
{
	int	i;

	i = 0;
	if (av[0] == '\0')
		return (0);
	if (ft_issign(av[i]) && av[i + 1] != '\0')
		i++;
    while (av[i])
    {
        if (!ft_isdigit(av[i]))
            return 0;
        i++;
    }

    return 1;
}

/**
 * Checks if there are any duplicates in the given array of numbers.
 */
static int	have_duplicates(int *num, int tmp, int max)
{
	int	i;

	i = 1;
	while (i < max)
	{
		if (tmp == num[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * Checks if the input is correct.
 */
int	validate_input(char **av, int ac)
{
	int	i;
	int	*num;
	int	nb_zeros;
	int	temp;

	nb_zeros = 0;
	i = 1;
	num = malloc(sizeof(int) * ac);
	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
		num[i] = ft_atoi_ps(av[i]);
		temp = num[i];
		if (have_duplicates(num, temp, i))
			return (0);
		i++;
	}
	free(num);
	if (nb_zeros > 1)
		return (0);
	return (1);
}
