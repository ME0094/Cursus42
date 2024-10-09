/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:08:05 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:52:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified value.
 */
void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)dest;
	while (i < count)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
