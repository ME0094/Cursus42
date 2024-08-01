/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:09:19 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 16:10:22 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of the character 'c'
 * (converted to an unsigned char) in the string 'str'. The search includes the
 * terminating null character.
 */
char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (!ch)
		return ((char *)str);
	return (NULL);
}
