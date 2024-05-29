/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_nosign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:41:35 by martirod          #+#    #+#             */
/*   Updated: 2024/05/29 16:47:27 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_num_nosign(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_num_nosign(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar ((n + '0')) == -1)
			return (-1);
		i++;
	}
	return (i);
}
