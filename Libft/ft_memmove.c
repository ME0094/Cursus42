/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:54 by martirod          #+#    #+#             */
/*   Updated: 2024/04/11 14:58:27 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*cdst;
	const unsigned char	*csrc;

	i = 0;
	cdst = (unsigned char *) dest;
	csrc = (const unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
		{
			cdst[n] = csrc[n];
		}
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
