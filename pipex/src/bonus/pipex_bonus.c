/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:14:53 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:25 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_pipex(char *cmd, char **envp) {
    pid_t pid;
    int fd[2];
    if (pipe(fd) < 0) {
        handle_pipe_error();
    }
    pid = fork();
    if (pid < 0) {
        handle_fork_error();
    }
    if (pid == 0) {
        child_process_logic(fd, cmd, envp);
    } else {
        close(fd[1]);
        if (dup2(fd[0], STDIN_FILENO) < 0) {
            perror("Error duplicating file descriptor for pipe");
            exit(EXIT_FAILURE);
        }
        close(fd[0]);
        wait(NULL);
    }
}
