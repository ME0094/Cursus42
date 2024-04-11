/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:03:45 by martirod          #+#    #+#             */
/*   Updated: 2024/04/11 14:56:01 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *dest, unsigned int n)
{
	unsigned char	*s;

	s = (unsigned char *)dest;
	while (*s < n)
	{
		*s = 0;
		s++;
	}
	return (dest);
}
