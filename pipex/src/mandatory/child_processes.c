/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_processes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:56 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 17:52:24 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void ft_child_1(int *fd, char **argv, char **envp) {
    int fd_infile;
    char **argv_sp;
    char *path;

    close(fd[0]);
    fd_infile = ft_get_fd(argv[1], 0);
    if (fd_infile < 0) {
        handle_error("Error opening input file");
    }
    dup_and_close(fd_infile, STDIN_FILENO);
    dup_and_close(fd[1], STDOUT_FILENO);
    argv_sp = ft_split(argv[2], ' ');
    path = ft_get_path(argv_sp, envp);
    execute_command(path, argv_sp, envp);
}

void ft_child_2(int *fd, char **argv, char **envp) {
    int fd_outfile;
    char **argv_sp;
    char *path;

    close(fd[1]);
    fd_outfile = ft_get_fd(argv[4], 1);
    if (fd_outfile < 0) {
        handle_error("Error opening output file");
    }
    dup_and_close(fd[0], STDIN_FILENO);
    dup_and_close(fd_outfile, STDOUT_FILENO);
    argv_sp = ft_split(argv[3], ' ');
    path = ft_get_path(argv_sp, envp);
    execute_command(path, argv_sp, envp);
}

void child_process_logic_1(int *fd, char **argv, char **envp) {
    ft_child_1(fd, argv, envp);
}

void child_process_logic_2(int *fd, char **argv, char **envp) {
    ft_child_2(fd, argv, envp);
}
