/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:24 by martirod          #+#    #+#             */
/*   Updated: 2024/04/18 14:18:05 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	s;

	i = ft_strlen(str);
	s = (unsigned char )c;
	while (i >= 0)
	{
		if (str[i] == s)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	if (!s)
		return ((char *)(str + i + 1));
	return (NULL);
}
