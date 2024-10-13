/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:28:09 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 00:15:54 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

int	ft_get_fd(char *file, int mode)
{
	int	fd;

	if (mode == 0)
	{
		fd = open(file, O_RDONLY);
		if (fd < 0)
		{
			perror("Error opening input file");
			exit(EXIT_FAILURE);
		}
		return (fd);
	}
	else if (mode == 1)
	{
		fd = open(file, O_CREAT | O_RDWR | O_TRUNC, 0644);
		if (fd < 0)
		{
			perror("Error opening output file");
			exit(EXIT_FAILURE);
		}
		return (fd);
	}
	else
	{
		fd = open(file, O_CREAT | O_RDWR | O_APPEND, 0644);
		if (fd < 0)
		{
			perror("Error opening output file");
			exit(EXIT_FAILURE);
		}
		return (fd);
	}
}

void	ft_check_cmd(int argc, char **argv, char **envp, int i)
{
	char	*path;
	char	**argv_sp;

	while (i <= (argc - 2))
	{
		argv_sp = ft_split(argv[i], ' ');
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
		i++;
	}
}

static char	**ft_make_path(char **argv_sp, char **envp)
{
	char	*path_str;
	char	**path_sp;
	int		i;

	i = 0;
	while (!(ft_strnstr(envp[i], "PATH=", 5)))
		i++;
	path_str = ft_substr(envp[i], 5, ft_strlen(envp[i]));
	path_sp = ft_split((path_str), ':');
	free(path_str);
	i = 0;
	while (path_sp[i])
	{
		path_sp[i] = ft_strjoin_free(path_sp[i], "/");
		path_sp[i] = ft_strjoin_free(path_sp[i], argv_sp[0]);
		i++;
	}
	return (path_sp);
}

char	*ft_get_path(char **argv_sp, char **envp)
{
	int		i;
	char	**path_sp;
	char	*result;

	i = -1;
	path_sp = ft_make_path(argv_sp, envp);
	while (path_sp[++i])
	{
		if (!access(path_sp[i], F_OK))
		{
			result = ft_substr(path_sp[i], 0, ft_strlen(path_sp[i]));
			ft_free(path_sp);
			return (result);
		}
	}
	ft_free(path_sp);
	return (NULL);
}
