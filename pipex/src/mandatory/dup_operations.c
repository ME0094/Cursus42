/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:27 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:47 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <unistd.h>

void dup_and_close(int oldfd, int newfd) {
    if (dup2(oldfd, newfd) < 0) {
        handle_error("Error duplicating file descriptor");
    }
    close(oldfd);
}
