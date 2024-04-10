/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:08:05 by martirod          #+#    #+#             */
/*   Updated: 2024/04/10 14:46:09 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *dest, int c, size_t count)
{
    unsigned char *s;
    size_t  i;

    i = 0;
    s = (unsigned char *)dest;
    while (i < count)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return(dest);
}