/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:14:53 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 00:16:44 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

static void	ft_child(char *cmd, char **envp)
{
	char	**cmd_sp;
	char	*path;

	cmd_sp = ft_split(cmd, ' ');
	path = ft_get_path(cmd_sp, envp);
	if (execve(path, cmd_sp, envp) == -1)
	{
		perror("Error executing command");
		ft_free(cmd_sp);
		free(path);
		exit(EXIT_FAILURE);
	}
}

static void	ft_pipex(char *cmd, char **envp)
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
	{
		close(fd[0]);
		if (dup2(fd[1], STDOUT_FILENO) < 0)
		{
			perror("Error duplicating file descriptor for pipe");
			exit(EXIT_FAILURE);
		}
		close(fd[1]);
		ft_child(cmd, envp);
	}
	else
	{
		close(fd[1]);
		if (dup2(fd[0], STDIN_FILENO) < 0)
		{
			perror("Error duplicating file descriptor for pipe");
			exit(EXIT_FAILURE);
		}
		close(fd[0]);
		wait(NULL);
	}
}

static void	ft_dups(int argc, char **argv)
{
	int	fdin;
	int	fdout;

	if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
	{
		fdin = ft_get_fd(argv[2], 0);
		fdout = ft_get_fd(argv[argc - 1], 2);
	}
	else
	{
		fdin = ft_get_fd(argv[1], 0);
		fdout = ft_get_fd(argv[argc - 1], 1);
	}
	if (dup2(fdin, STDIN_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for input file");
		exit(EXIT_FAILURE);
	}
	close(fdin);
	if (dup2(fdout, STDOUT_FILENO) < 0)
	{
		perror("Error duplicating file descriptor for output file");
		exit(EXIT_FAILURE);
	}
	close(fdout);
}

int	ft_check_input(char **argv)
{
	int	i;

	i = 0;
	if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
			i = 3;
	else
			i = 2;
	return (i);
}

int	main(int argc, char **argv, char **envp)
{
	int	i;
	int	pid;

	if (argc < 5)
	{
		ft_putstr_fd("Too few arguments. Check and try again
", 2);
		exit(EXIT_FAILURE);
	}
	else
	{
		i = ft_check_input(argv);
		ft_check_cmd(argc, argv, envp, i);
		ft_dups(argc, argv);
		pid = fork();
		if (pid < 0)
		{
			perror("Error forking process");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			while (i < (argc - 2))
				ft_pipex(argv[i++], envp);
			ft_child(argv[i], envp);
		}
		else
			wait(NULL);
	}
	return (0);
}
