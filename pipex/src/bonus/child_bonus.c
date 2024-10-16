/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:11:57 by martirod          #+#    #+#             */
/*   Updated: 2024/10/16 16:44:25 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/**
 * Executes a command in a child process.
 */
void	ft_child(char *cmd, char **envp)
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

/**
 * Executes the logic for a child process in a pipeline.
 */
void	child_process_logic(int *fd, char *cmd, char **envp)
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
