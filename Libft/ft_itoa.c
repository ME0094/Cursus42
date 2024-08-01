/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:54:51 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 15:56:20 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Determines the sign of a given integer.
 */
static int	sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

/**
 * Calculates the number of digits in an integer.
 */
static int	digit_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

/**
 * Converts an integer to a string representation.
 */
char	*ft_itoa(int n)
{
	int		is_negative;
	char	*str;
	int		i;

	is_negative = sign(n);
	i = digit_count(n) + is_negative;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (is_negative == 1)
	{
		*str = '-';
		str[--i] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (i-- - is_negative)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
