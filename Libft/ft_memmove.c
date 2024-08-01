/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:54 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 16:03:31 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from a source address to a destination address,
 * handling overlapping memory regions correctly.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	if (cdst < csrc)
	{
		i = 0;
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	else if (cdst > csrc)
	{
		i = n;
		while (i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return (dest);
}
