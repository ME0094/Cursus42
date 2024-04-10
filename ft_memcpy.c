/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:36 by martirod          #+#    #+#             */
/*   Updated: 2024/04/10 16:35:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memccpy (void *dest, const void *src, size_t n)
{
   size_t              i;
   unsigned char       *cdst;
   const unsigned char *csrc;


   if (!dest && !src)
       return (0);
   i = 0;
   cdst = (unsigned char *) dest;
   csrc = (const unsigned char *) src;
   while (i < n)
   {
       cdst[i] = csrc[i];
       i++;
   }
   return (dest);
}