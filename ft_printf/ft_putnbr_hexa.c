/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:09:34 by martirod          #+#    #+#             */
/*   Updated: 2024/05/29 20:29:49 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long long n, char c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_putnbr_hexa(n / 16, c);
		count += ft_putchar("0123456789abcdef"[n % 16]);
	}
	else
		count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}
