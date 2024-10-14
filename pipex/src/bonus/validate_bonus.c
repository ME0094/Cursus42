/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:13:51 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:29 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void validate_arguments(int argc) {
    if (argc < 5) {
        ft_putstr_fd("Too few arguments. Check and try again", 2);
        exit(EXIT_FAILURE);
    }
}

void handle_fork_and_process(int argc, char **argv, char **envp, int i) {
    pid_t pid = fork();
    if (pid < 0) {
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }
    if (pid == 0) {
        while (i < (argc - 2)) {
            ft_pipex(argv[i++], envp);
        }
        ft_child(argv[i], envp);
    } else {
        wait(NULL);
    }
}
