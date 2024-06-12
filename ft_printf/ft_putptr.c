/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:10:09 by martirod          #+#    #+#             */
/*   Updated: 2024/06/12 16:29:23 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n)
{
	size_t		i;

	i = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_putnbr_hexa(n, 'x');
	return (i);
}
