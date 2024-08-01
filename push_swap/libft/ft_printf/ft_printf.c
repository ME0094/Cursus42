/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:36:31 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:24:53 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Performs the conversion based on the given type and variable arguments.
 */
static int	ft_conversion(const char type, va_list vargs)
{
	int	a;

	a = 0;
	if (type == 'c')
		a += ft_putchar(va_arg(vargs, int));
	else if (type == 'u')
		a += ft_putnbr(va_arg(vargs, unsigned int));
	else if ((type == 'i') || (type == 'd'))
		a += ft_putnbr(va_arg(vargs, int));
	else if (type == 's')
		a += ft_putstr(va_arg(vargs, char *));
	else if (type == 'x' || type == 'X')
		a += ft_putnbr_hexa(va_arg(vargs, unsigned int), type);
	else if (type == 'p')
		a += ft_putptr(va_arg(vargs, uintptr_t));
	else if (type == '%')
		a += ft_putchar('%');
	return (a);
}

/**
 * @brief Implements a formatted output function similar to printf.
 *
 * This function takes a format string and a variable number of arguments and
 * prints the formatted output to the standard output. It supports a subset of
 * the format specifiers supported by printf.
 */
int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		len;
	int		check;

	va_start(vargs, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			check = ft_conversion(*(++str), vargs);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(vargs);
	return (len);
}
