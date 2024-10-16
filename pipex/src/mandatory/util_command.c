/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:20:39 by martirod          #+#    #+#             */
/*   Updated: 2024/10/16 18:08:44 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/**
 * This function splits the given command argument into an array of strings,
 * attempts to find the command's path using the provided environment variables,
 * and handles errors if the command path is not found.
 */
void	check_command(char *arg, char **envp)
{
	char	*path;
	char	**argv_sp;

	argv_sp = ft_split(arg, ' ');
	path = ft_get_path(argv_sp, envp);
	if (!path)
	{
		perror("Error finding command path");
		ft_putstr_fd("invalid CMD: ", 2);
		ft_putendl_fd(argv_sp[0], 2);
		ft_free(argv_sp);
		exit(EXIT_FAILURE);
	}
	else
	{
		ft_free(argv_sp);
		free(path);
	}
}

/**
 * This function iterates over the command-line arguments starting from the
 * specified index and checks the validity of each command using the provided
 * environment variables.
 */
void	ft_check_cmd(int argc, char **argv, char **envp, int i)
{
	while (i <= (argc - 2))
	{
		check_command(argv[i], envp);
		i++;
	}
}
