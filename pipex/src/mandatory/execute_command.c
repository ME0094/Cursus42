/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:16:42 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 19:24:57 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

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
