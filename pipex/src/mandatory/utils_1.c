/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:32:26 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:37:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/* Function to free memory allocated for a double pointer */
void free_string_array(char **array)
{
    int i;

    i = 0;
    while (array[i])
        free(array[i++]);
    free(array);
}

/* Function to get file descriptor based on mode */
int get_file_descriptor(char *file, int mode)
{
    int fd;

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
char *validate_command(char *cmd, char **envp)
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
