/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:30:59 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:33:58 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

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

/* Main function */
int main(int argc, char **argv, char **envp)
{
    if (argc != 5)
    {
        ft_putstr_fd("Invalid argument number. Check and try again\n", 2);
        exit(EXIT_FAILURE);
    }
    check_commands(argc, argv, envp, 2);
    handle_file_descriptors(argc, argv);
    handle_piping_and_forking(argv, envp);
    return (0);
}
