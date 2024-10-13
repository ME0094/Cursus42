/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:32:34 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:38:00 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

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
static char **create_command_path(char **cmd_args, char **envp)
{
    char *path_str;
    char **path_array;
    int i;

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
char *get_command_path(char **cmd_args, char **envp)
{
    int i;
    char **path_array;
    char *result;

    path_array = create_command_path(cmd_args, envp);
    i = 0;
    while (path_array[i])
    {
        if (access(path_array[i], X_OK) == 0)
        {
            result = ft_strdup(path_array[i]);
            free_string_array(path_array);
            return (result);
        }
        i++;
    }
    free_string_array(path_array);
    return (NULL);
}
