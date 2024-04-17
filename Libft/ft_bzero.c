/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:03:45 by martirod          #+#    #+#             */
/*   Updated: 2024/04/15 18:48:00 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_bzero(void *s, size_t n)
{
	size_t	c;
=======
void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	c;
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e

	c = 0;
	while (c < n)
	{
<<<<<<< HEAD
		((unsigned char *)s)[c++] = 0;
=======
		((unsigned char*)s) [c++] = 0;
>>>>>>> 66306ff2cc077d1229f3261523ed6330d2cd4b7e
	}
}
