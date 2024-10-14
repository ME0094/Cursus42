/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dups_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:13:35 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 18:32:52 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void	ft_dups(int argc, char **argv)
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
	if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
		return (3);
	else
		return (2);
}