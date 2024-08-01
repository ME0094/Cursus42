/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:03:45 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 15:50:42 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory area pointed to by s to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		((unsigned char *)s)[c++] = 0;
	}
}
