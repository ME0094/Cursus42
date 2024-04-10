/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:03:45 by martirod          #+#    #+#             */
/*   Updated: 2024/04/10 15:00:20 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_bzero(void *dest, size_t n)
{
    unsigned char *s;
    size_t  i;

    i = 0;
    s = (unsigned char *)dest;
    while (i < n)
    {
        s[i] = 0;
        i++;
    }
    return (dest);
}