/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_child.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:57:53 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 21:29:03 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

static int open_input_file(char *file)
{
    int input_fd = get_file_descriptor(file, 0);
    if (input_fd < 0)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }
    return input_fd;
}

static void execute_command(char *cmd, char **envp)
{
    printf("Debug: Entering execute_command\n");
    char **cmd_args = ft_split(cmd, ' ');
    printf("Debug: Command arguments split\n");
    char *cmd_path = get_command_path(cmd_args, envp);
    printf("Debug: Command path obtained\n");
    if (execve(cmd_path, cmd_args, envp) == -1)
    {
        ft_putstr_fd("pipex: command not found: ", 2);
        ft_putendl_fd(cmd_args[0], 2);
        free_string_array(cmd_args);
        free(cmd_path);
        exit(EXIT_FAILURE);
    }
}

static void setup_input(int *pipe_fd, char *file)
{
    int input_fd = open_input_file(file);
    close(pipe_fd[0]);
    dup2(input_fd, STDIN_FILENO);
    close(input_fd);
}

static void setup_output(int *pipe_fd)
{
    dup2(pipe_fd[1], STDOUT_FILENO);
    close(pipe_fd[1]);
}

static void execute_first_child(int *pipe_fd, char **argv, char **envp)
{
    setup_input(pipe_fd, argv[1]);
    setup_output(pipe_fd);
    execute_command(argv[2], envp);
}

static int open_output_file(char *file)
{
    int output_fd = get_file_descriptor(file, 1);
    if (output_fd < 0)
    {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }
    return output_fd;
}

static void setup_output_file(int *pipe_fd, char *file)
{
    int output_fd = open_output_file(file);
    close(pipe_fd[1]);
    dup2(pipe_fd[0], STDIN_FILENO);
    close(pipe_fd[0]);
    dup2(output_fd, STDOUT_FILENO);
    close(output_fd);
}

static void execute_second_child(int *pipe_fd, char **argv, char **envp)
{
    setup_output_file(pipe_fd, argv[4]);
    execute_command(argv[3], envp);
}
