/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:35 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 19:01:53 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Removes leading and trailing characters specified in the 'set' string
 *  from the 's1' string.
 */
char	*ft_strtrim(char *s1, char *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	trimmed = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (trimmed)
		ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}
