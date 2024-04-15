/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:25 by martirod          #+#    #+#             */
/*   Updated: 2024/04/12 14:24:22 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const unsigned char	*ptr = s;

	while (n-- > 0)
	{
		if (*ptr == ((unsigned char) c))
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
