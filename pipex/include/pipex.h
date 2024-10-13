/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:50:54 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

/* Function declarations */
extern void execute_first_child(int *pipe_fd, char **argv, char **envp);
extern void execute_second_child(int *pipe_fd, char **argv, char **envp);
extern void setup_input(int *pipe_fd, char *file);
extern void setup_output(int *pipe_fd);
extern void setup_output_file(int *pipe_fd, char *file);

extern void handle_file_descriptors(int argc, char **argv);
void create_pipe(int *pipe_fd);
int open_input_file(char *file);
int open_output_file(char *file);
void handle_piping_and_forking(char **argv, char **envp);
pid_t fork_process();

/* Utility functions */
void	free_string_array(char **array);
int		get_file_descriptor(char *file, int mode);
void check_commands(int argc, char **argv, char **envp, int i);
char *validate_command(char *cmd, char **envp);
char	*get_command_path(char **cmd_args, char **envp);
char	**split_string(char const *s, char c);

#endif