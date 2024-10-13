/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:28:09 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 21:30:01 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/* Function to free memory allocated for a double pointer */
void	free_string_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

/* Function to get file descriptor based on mode */
int	get_file_descriptor(char *file, int mode)
{
	int	fd;

	if (mode == 0)
		fd = open(file, O_RDONLY);
	else if (mode == 1)
		fd = open(file, O_CREAT | O_RDWR | O_TRUNC, 0644);
	else
		fd = open(file, O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd < 0)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}
	return (fd);
}

/* Function to check the validity of commands */
static char *validate_command(char *cmd, char **envp)
{
	char **cmd_args = ft_split(cmd, ' ');
	char *cmd_path = get_command_path(cmd_args, envp);
	if (!cmd_path)
	{
		free(cmd_path);
		ft_putstr_fd("invalid CMD: ", 2);
		ft_putendl_fd(cmd_args[0], 2);
		free_string_array(cmd_args);
		exit(EXIT_FAILURE);
	}
	free_string_array(cmd_args);
	return cmd_path;
}

void check_commands(int argc, char **argv, char **envp, int i)
{
	while (i <= (argc - 2))
	{
		char *cmd_path = validate_command(argv[i], envp);
		free(cmd_path);
		i++;
	}
}

/* Function to create the path for commands */
static char	**create_command_path(char **cmd_args, char **envp)
{
	char	*path_str;
	char	**path_array;
	int		i;

	i = 0;
	while (!(ft_strnstr(envp[i], "PATH=", 5)))
		i++;
	path_str = ft_substr(envp[i], 5, ft_strlen(envp[i]));
	path_array = ft_split((path_str), ':');
	free(path_str);
	i = 0;
	while (path_array[i])
	{
		path_array[i] = ft_strjoin_free(path_array[i], "/");
		path_array[i] = ft_strjoin_free(path_array[i], cmd_args[0]);
		i++;
	}
	return (path_array);
}

/* Function to get the path of a command */
char	*get_command_path(char **cmd_args, char **envp)
{
	int		i;
	char	**path_array;
	char	*result;

	i = -1;
	path_array = create_command_path(cmd_args, envp);
	while (path_array[++i])
	{
		if (!access(path_array[i], F_OK))
		{
			result = ft_substr(path_array[i], 0, ft_strlen(path_array[i]));
			free_string_array(path_array);
			return (result);
		}
	}
	free_string_array(path_array);
	return (NULL);
}
