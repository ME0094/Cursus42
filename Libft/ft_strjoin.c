/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:10:08 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 16:12:14 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings.
 */
char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = (char *)malloc(len1 + len2 + 1);
	if (str1 == NULL || str2 == NULL)
		return (0);
	if (result == NULL)
		return (0);
	ft_strlcpy(result, str1, len1 + len2 + 1);
	ft_strlcat(result, (char *) str2, len1 + len2 + 1);
	return (result);
}
