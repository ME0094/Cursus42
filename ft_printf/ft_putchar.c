/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:21:32 by martirod          #+#    #+#             */
/*   Updated: 2024/05/29 20:29:53 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}
