/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:24 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 17:03:42 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			last_occurrence = str;
		}
		str++;
	}
	if (*str == c)
	{
		last_occurrence = str;
	}
	return ((char *)last_occurrence);
}
