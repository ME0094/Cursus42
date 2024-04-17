/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:25 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 18:52:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n-- > 0)
	{
<<<<<<< HEAD
		if (*ptr == ((unsigned char)c))
=======
		if (*ptr == ((unsigned char) c))
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
