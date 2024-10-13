/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:27:54 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:28:38 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex_bonus.h"

/* Function to check input arguments */
int check_input_arguments(char **argv)
{
    int i;

    i = 0;
    if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
        i = 3;
    else
        i = 2;
    return (i);
}

/* Function to execute a command */
static void execute_command(char *cmd_path, char **cmd_args, char **envp)
{
    if (execve(cmd_path, cmd_args, envp) == -1)
    {
        ft_putstr_fd("pipex: command not found: ", 2);
        ft_putendl_fd(cmd_args[0], 2);
        free_string_array(cmd_args);
        free(cmd_path);
        exit(EXIT_FAILURE);
    }
}

/* Function to validate arguments */
static void validate_arguments(int argc)
{
    if (argc < 5)
    {
        ft_putstr_fd("Too few arguments. Check and try again", 2);
        exit(EXIT_FAILURE);
    }
}

/* Function to fork and execute */
static void fork_and_execute(int argc, char **argv, char **envp, int i)
{
    int pid = fork();
    if (pid < 0)
    {
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }
    if (pid == 0)
    {
        while (i < (argc - 2))
            handle_piping_and_forking(argv[i++], envp);
        handle_child_process(argv[i], envp);
    }
    else
        wait(NULL);
}

/* Main function */
int main(int argc, char **argv, char **envp)
{
    validate_arguments(argc);
    int i = check_input_arguments(argv);
    check_commands(argc, argv, envp, i);
    handle_file_descriptors(argc, argv);
    fork_and_execute(argc, argv, envp, i);
    return (0);
}
