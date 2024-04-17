/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:24 by martirod          #+#    #+#             */
/*   Updated: 2024/04/17 18:01:02 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence = NULL;

	while (*str != '\0')
	{
		if (*str == c)
		{
			last_occurrence = str;
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}
