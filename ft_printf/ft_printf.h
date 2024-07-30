/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:13:51 by martirod          #+#    #+#             */
/*   Updated: 2024/06/12 16:19:25 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(char const *s, ...);
int		ft_putchar(char c);
int		ft_putnbr(long nb);
int		ft_putnbr_hexa(unsigned long nbr, char up);
int		ft_putptr(uintptr_t n);
int		ft_putstr(char *str);

#endif