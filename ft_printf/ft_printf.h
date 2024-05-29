/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:13:51 by martirod          #+#    #+#             */
/*   Updated: 2024/05/29 20:31:56 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *s, ...);
int		ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_putnbr_hexa(unsigned long long n, char c);
int		ft_putptr(unsigned long long n);
int		ft_putstr(char *str);

#endif