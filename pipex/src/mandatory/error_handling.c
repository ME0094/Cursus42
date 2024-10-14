/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:10 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:51 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void handle_error(const char *msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

void handle_pipe_error(void) {
    perror("Error creating pipe");
    exit(EXIT_FAILURE);
}

void handle_fork_error(void) {
    perror("Error forking process");
    exit(EXIT_FAILURE);
}
