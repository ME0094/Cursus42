/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:25 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:49:50 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of a byte in a block of memory.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n-- > 0)
	{
		if (*ptr == ((unsigned char)c))
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
