/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:30:30 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:33:31 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/* Function to handle the first child process */
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
/* Function to handle the second child process */
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



/* Function to handle the piping and forking */
void create_pipe(int *pipe_fd)
{
    if (pipe(pipe_fd) == -1)
    {
        perror("Error creating pipe");
        exit(EXIT_FAILURE);
    }
}

pid_t fork_process()
{
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }
    return pid;
}
