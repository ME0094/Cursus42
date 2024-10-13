/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:15:20 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 19:59:32 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/* Function to handle the first child process */
static int	open_input_file(char *file)
{
	int input_fd = get_file_descriptor(file, 0);
	if (input_fd < 0)
	{
		perror("Error opening input file");
		exit(EXIT_FAILURE);
	}
	return input_fd;
}

static void	execute_command(char *cmd, char **envp)
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

static void	handle_first_child(int *pipe_fd, char **argv, char **envp)
{
	printf("Debug: Entering handle_first_child\n");
	int input_fd = open_input_file(argv[1]);
	printf("Debug: Input file opened\n");
	close(pipe_fd[0]);
	dup2(input_fd, STDIN_FILENO);
	close(input_fd);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[1]);
	execute_command(argv[2], envp);
}

/* Function to handle the second child process */
static int	open_output_file(char *file)
{
	int output_fd = get_file_descriptor(file, 1);
	if (output_fd < 0)
	{
		perror("Error opening output file");
		exit(EXIT_FAILURE);
	}
	return output_fd;
}

static void	handle_second_child(int *pipe_fd, char **argv, char **envp)
{
	printf("Debug: Entering handle_second_child\n");
	int output_fd = open_output_file(argv[4]);
	printf("Debug: Output file opened\n");
	close(pipe_fd[1]);
	dup2(pipe_fd[0], STDIN_FILENO);
	close(pipe_fd[0]);
	dup2(output_fd, STDOUT_FILENO);
	close(output_fd);
	execute_command(argv[3], envp);
}

/* Function to handle the piping and forking */
static void	create_pipe(int *pipe_fd)
{
	if (pipe(pipe_fd) == -1)
	{
		perror("Error creating pipe");
		exit(EXIT_FAILURE);
	}
}

static pid_t	fork_process()
{
	pid_t pid = fork();
	if (pid < 0)
	{
		perror("Error forking process");
		exit(EXIT_FAILURE);
	}
	return pid;
}

static void	handle_piping_and_forking(char **argv, char **envp)
{
	printf("Debug: Entering handle_piping_and_forking\n");
	int pipe_fd[2];
	create_pipe(pipe_fd);
	printf("Debug: Pipe created\n");
	pid_t pid = fork_process();
	printf("Debug: First fork done\n");
	if (pid == 0)
		handle_first_child(pipe_fd, argv, envp);
	else
	{
		pid = fork_process();
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
