/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:08:05 by martirod          #+#    #+#             */
/*   Updated: 2024/04/11 13:40:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *dest, int c, unsigned int count)
{
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	s = (unsigned char *)dest;
	while (i < count)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
