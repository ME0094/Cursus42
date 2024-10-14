/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:11:57 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:13 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void ft_child(char *cmd, char **envp) {
    char **cmd_sp = ft_split(cmd, ' ');
    char *path = ft_get_path(cmd_sp, envp);
    if (execve(path, cmd_sp, envp) == -1) {
        perror("Error executing command");
        ft_free(cmd_sp);
        free(path);
        exit(EXIT_FAILURE);
    }
}

void child_process_logic(int *fd, char *cmd, char **envp) {
    close(fd[0]);
    if (dup2(fd[1], STDOUT_FILENO) < 0) {
        perror("Error duplicating file descriptor for pipe");
        exit(EXIT_FAILURE);
    }
    close(fd[1]);
    ft_child(cmd, envp);
}
