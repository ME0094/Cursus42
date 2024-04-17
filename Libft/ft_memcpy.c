/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:36 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 18:52:29 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;
=======
void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int		i;
	unsigned char		*cdst;
	const unsigned char	*csrc;
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e

	i = 0;
	cdst = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dest);
}
