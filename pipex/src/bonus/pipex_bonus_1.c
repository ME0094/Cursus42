/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:28:31 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:54:59 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex_bonus.h"

/* Function to handle a child process */
static void handle_child_process(char *cmd, char **envp)
{
    char **cmd_args;
    char *cmd_path;

    cmd_args = ft_split(cmd, ' ');
    cmd_path = get_command_path(cmd_args, envp);
    execute_command(cmd_path, cmd_args, envp);
}

/* Function to handle piping and forking */
static void create_pipe(int *pipe_fd)
{
    if (pipe(pipe_fd) == -1)
    {
        perror("Error creating pipe");
        exit(EXIT_FAILURE);
    }
}

static void fork_and_handle_child(char *cmd, char **envp, int *pipe_fd)
{
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }
    if (pid == 0)
    {
        close(pipe_fd[0]);
        dup2(pipe_fd[1], STDOUT_FILENO);
        close(pipe_fd[1]);
        handle_child_process(cmd, envp);
    }
    else
    {
        close(pipe_fd[1]);
        dup2(pipe_fd[0], STDIN_FILENO);
        close(pipe_fd[0]);
        wait(NULL);
    }
}

static void handle_piping_and_forking(char *cmd, char **envp)
{
    int pipe_fd[2];
    create_pipe(pipe_fd);
    fork_and_handle_child(cmd, envp, pipe_fd);
}

/* Function to handle file descriptors */
static void handle_file_descriptors(int argc, char **argv)
{
    int input_fd;
    int output_fd;

    if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
    {
        input_fd = get_file_descriptor(argv[2], 0);
        output_fd = get_file_descriptor(argv[argc - 1], 2);
    }
    else
    {
        input_fd = get_file_descriptor(argv[1], 0);
        output_fd = get_file_descriptor(argv[argc - 1], 1);
    }
    dup2(input_fd, STDIN_FILENO);
    close(input_fd);
    dup2(output_fd, STDOUT_FILENO);
    close(output_fd);
}
