/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:10:17 by martirod          #+#    #+#             */
/*   Updated: 2024/04/10 17:31:17 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int c = 0;
    while (src[c] != '\0')
    {
        c++;
    }
    while (dest[j] != '\0' && j < size)
    {
        j++;
    }
    while (src[i] != '\0' && (i + j + 1) < size)
    {
        dest[j + i] = src[i];
        i++;
    }
    if (j != size)
    {
        dest[j + i] = '\0';
    }
    return (j + c);
}