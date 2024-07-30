/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:09:44 by martirod          #+#    #+#             */
/*   Updated: 2024/04/17 11:45:22 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	length;
	char	*dest;

	length = ft_strlen(string);
	dest = (char *)malloc(length + 1);
	if (string == NULL)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, string, length + 1);
	return (dest);
}
