/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:58:07 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 20:59:13 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

static void create_pipe(int *pipe_fd)
{
    if (pipe(pipe_fd) == -1)
    {
        perror("Error creating pipe");
        exit(EXIT_FAILURE);
    }
}

static pid_t fork_process()
{
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }
    return pid;
}

static void fork_and_handle_first_child(int *pipe_fd, char **argv, char **envp)
{
    pid_t pid = fork_process();
    if (pid == 0)
        execute_first_child(pipe_fd, argv, envp);
}

static void fork_and_handle_second_child(int *pipe_fd, char **argv, char **envp)
{
    pid_t pid = fork_process();
    if (pid == 0)
        execute_second_child(pipe_fd, argv, envp);
    else
    {
        close(pipe_fd[0]);
        close(pipe_fd[1]);
    }
    waitpid(pid, NULL, 0);
}

static void handle_piping_and_forking(char **argv, char **envp)
{
    int pipe_fd[2];
    create_pipe(pipe_fd);
    fork_and_handle_first_child(pipe_fd, argv, envp);
    fork_and_handle_second_child(pipe_fd, argv, envp);
}
