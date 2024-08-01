/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:05:04 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 15:55:02 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a printable character.
 */
int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}
