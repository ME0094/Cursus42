/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:15:20 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 18:00:28 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void ft_pipex(char **argv, char **envp) {
    t_pid pid;
    int fd[2];

    if (pipe(fd) < 0) {
        handle_pipe_error();
    }
    pid = fork();
    if (pid < 0) {
        handle_fork_error();
    }
    if (pid == 0) {
        child_process_logic_1(fd, argv, envp);
    } else {
        pid = fork();
        if (pid < 0) {
            handle_fork_error();
        }
        if (pid == 0) {
            child_process_logic_2(fd, argv, envp);
        } else {
            close(fd[0]);
            close(fd[1]);
            waitpid(pid, NULL, 0);
        }
    }
}
