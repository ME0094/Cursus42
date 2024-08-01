/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:10:17 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:58:07 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings,
 *  ensuring that the resulting string is null-terminated.
 */
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	j = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	while (dest[j] != '\0' && j < size)
		j++;
	while (src[i] != '\0' && (i + j + 1) < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j != size)
		dest[j + i] = '\0';
	return (j + c);
}
