/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:14:53 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 18:37:12 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void	ft_pipex(char **argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) < 0)
		handle_pipe_error();
	pid = fork();
	if (pid < 0)
		handle_fork_error();
	if (pid == 0)
		child_process_logic(fd, *argv, envp);
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
