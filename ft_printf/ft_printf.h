/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:13:51 by martirod          #+#    #+#             */
/*   Updated: 2024/06/10 18:05:02 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *s, ...);
int		ft_putchar(char c);
int		ft_putnbr(long nb);
int		ft_putnbr_hexa(unsigned long nbr, char up);
int		ft_putptr(unsigned long long n);
int		ft_putstr(char *str);

#endif