/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:42 by martirod          #+#    #+#             */
/*   Updated: 2024/10/16 16:53:28 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/**
 * This function attempts to execute a command specified by the given path
 * with the provided arguments and environment variables. If the execution
 * fails, it prints an error message, frees allocated memory, and exits the
 * program with a failure status.
 */
void	execute_command(char *path, char **argv_sp, char **envp)
{
	if (execve(path, argv_sp, envp) == -1)
	{
		perror("Error executing command");
		ft_free(argv_sp);
		free(path);
		exit(EXIT_FAILURE);
	}
}
