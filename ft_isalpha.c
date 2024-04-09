/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:04:18 by martirod          #+#    #+#             */
/*   Updated: 2024/04/08 15:04:20 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_isalpha(int c)
if (c >= 65 && c <= 90) || (c >= 97 && <= 122)
    return (1);
return (0);