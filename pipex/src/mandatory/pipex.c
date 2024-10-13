/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:15:20 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 00:15:15 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

void	ft_child_1(int *fd, char **argv, char **envp)
{
	int		fd_infile;
	char	**argv_sp;
	char	*path;

	close(fd[0]);
	fd_infile = ft_get_fd(argv[1], 0);
	if (fd_infile < 0)
	{
		perror("Error opening input file");
		exit(EXIT_FAILURE);
	}
	if (dup2(fd_infile, STDIN_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for input file");
		exit(EXIT_FAILURE);
	}
	close(fd_infile);
	if (dup2(fd[1], STDOUT_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for pipe");
		exit(EXIT_FAILURE);
	}
	close(fd[1]);
	argv_sp = ft_split(argv[2], ' ');
	path = ft_get_path(argv_sp, envp);
	if (execve(path, argv_sp, envp) == -1)
	{
		perror("Error executing command");
		ft_free(argv_sp);
		free(path);
		exit(EXIT_FAILURE);
	}
}

void	ft_child_2(int *fd, char **argv, char **envp)
{
	int		fd_outfile;
	char	**argv_sp;
	char	*path;

	close(fd[1]);
	fd_outfile = ft_get_fd(argv[4], 1);
	if (fd_outfile < 0)
	{
		perror("Error opening output file");
		exit(EXIT_FAILURE);
	}
	if (dup2(fd[0], STDIN_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for pipe");
		exit(EXIT_FAILURE);
	}
	close(fd[0]);
	if (dup2(fd_outfile, STDOUT_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for output file");
		exit(EXIT_FAILURE);
	}
	close(fd_outfile);
	argv_sp = ft_split(argv[3], ' ');
	path = ft_get_path(argv_sp, envp);
	if (execve(path, argv_sp, envp) == -1)
	{
		perror("Error executing command");
		ft_free(argv_sp);
		free(path);
		exit(EXIT_FAILURE);
	}
}

void	ft_pipex(char **argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) < 0)
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
		ft_child_1(fd, argv, envp);
	else
	{
		pid = fork();
		if (pid < 0)
		{
			perror("Error forking process");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
			ft_child_2(fd, argv, envp);
		else
		{
			close(fd[0]);
			close(fd[1]);
			waitpid(pid, NULL, 0);
		}
	}
}

int	main(int argc, char **argv, char **envp)
{
	if (argc != 5)
	{
		ft_putstr_fd("Invalid argument number. Check and try again\n", 2);
		exit(EXIT_FAILURE);
	}
	ft_check_cmd(argc, argv, envp, 2);
	ft_pipex(argv, envp);
	return (0);
}
