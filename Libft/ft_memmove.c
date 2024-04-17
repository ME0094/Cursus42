/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:54 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 18:52:46 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	const unsigned char	*csrc;

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
<<<<<<< HEAD
	else if (cdst > csrc)
	{
		i = n;
		while (i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			i--;
		}
	}
=======
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e
	return (dest);
}
