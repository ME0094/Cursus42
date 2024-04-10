/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:10:29 by martirod          #+#    #+#             */
/*   Updated: 2024/04/10 17:34:13 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int len = 0;
    while (dest[len] != '\0')
    {
        len++;
    }
    while (i < nb && src[i] != '\0')
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return dest;
}