/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:15:20 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 18:56:55 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

#include "pipex.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

/* Function to handle the first child process */
static void	handle_first_child(int *pipe_fd, char **argv, char **envp)
{
	int		input_fd;
	char	**cmd_args;
	char	*cmd_path;

	close(pipe_fd[0]);
	input_fd = get_file_descriptor(argv[1], 0);
	if (input_fd < 0)
	{
		perror("Error opening input file");
		exit(EXIT_FAILURE);
	}
	dup2(input_fd, STDIN_FILENO);
	close(input_fd);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[1]);
	cmd_args = ft_split(argv[2], ' ');
	cmd_path = get_command_path(cmd_args, envp);
	if (execve(cmd_path, cmd_args, envp) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(cmd_args[0], 2);
		free_string_array(cmd_args);
		free(cmd_path);
		exit(EXIT_FAILURE);
	}
}

/* Function to handle the second child process */
static void	handle_second_child(int *pipe_fd, char **argv, char **envp)
{
	int		output_fd;
	char	**cmd_args;
	char	*cmd_path;

	close(pipe_fd[1]);
	output_fd = get_file_descriptor(argv[4], 1);
	if (output_fd < 0)
	{
		perror("Error opening output file");
		exit(EXIT_FAILURE);
	}
	dup2(pipe_fd[0], STDIN_FILENO);
	close(pipe_fd[0]);
	dup2(output_fd, STDOUT_FILENO);
	close(output_fd);
	cmd_args = ft_split(argv[3], ' ');
	cmd_path = get_command_path(cmd_args, envp);
	if (execve(cmd_path, cmd_args, envp) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(cmd_args[0], 2);
		free_string_array(cmd_args);
		free(cmd_path);
		exit(EXIT_FAILURE);
	}
}

/* Function to handle the piping and forking */
static void	handle_piping_and_forking(char **argv, char **envp)
{
	pid_t	pid;
	int		pipe_fd[2];

	if (pipe(pipe_fd) == -1)
	{
		perror("Error creating pipe");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Error forking process");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
		handle_first_child(pipe_fd, argv, envp);
	else
	{
		pid = fork();
		if (pid < 0)
		{
			perror("Error forking process");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
			handle_second_child(pipe_fd, argv, envp);
		else
		{
			close(pipe_fd[0]);
			close(pipe_fd[1]);
		}
	}
	waitpid(pid, NULL, 0);
}

/* Main function */
int	main(int argc, char **argv, char **envp)
{
	if (argc != 5)
	{
		ft_putstr_fd("Invalid argument number. Check and try again\n", 2);
		exit(EXIT_FAILURE);
	}
	check_commands(argc, argv, envp, 2);
	handle_piping_and_forking(argv, envp);
	return (0);
}
