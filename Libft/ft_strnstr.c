/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:16 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 18:52:31 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
<<<<<<< HEAD
	j = 0;
	while (j < len && haystack[j])
	{
		i = 0;
		while (j < len && needle[i] && haystack[i] && needle[i] == haystack[j])
		{
			++i;
			++j;
		}
		if (needle[i] == '\0')
			return ((char *)&haystack[j - i]);
		j = j - i + 1;
=======
	while (haystack[i] != '\0' && i < len)
	{
		while (i + j < len && haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
	}
	if (needle[j] == '\0')
	{
		return ((char *)&haystack[i]);
		i++;
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e
	}
	return (0);
}
