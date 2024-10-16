/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:27 by martirod          #+#    #+#             */
/*   Updated: 2024/10/16 16:51:40 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/**
 * Duplicates a file descriptor and closes the old one.
 */
void	dup_and_close(int oldfd, int newfd)
{
	if (dup2(oldfd, newfd) < 0)
		handle_error("Error duplicating file descriptor");
	close(oldfd);
}
