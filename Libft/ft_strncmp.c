/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:06 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 16:16:27 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two strings up to a specified number of characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		u1 = (unsigned char)*s1;
		u2 = (unsigned char)*s2;
		if (u1 != u2)
		{
			return (u1 - u2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
