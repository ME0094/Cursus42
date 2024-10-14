/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 17:14:40 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

void child_process(int *pipefd, char **argv, char **envp);
void dup_and_close(int oldfd, int newfd);
void handle_error(const char *msg);
void handle_pipe_error(void);
void handle_fork_error(void);
void execute_command(char *path, char **argv_sp, char **envp);
void ft_free(char **ptr);
int open_file(char *file, int flags, const char *error_msg);
int ft_get_fd(char *file, int mode);
int main(int argc, char **argv, char **envp);
void pipex(int argc, char **argv, char **envp);
void check_command(char *arg, char **envp);
void ft_check_cmd(int argc, char **argv, char **envp, int i);
char *ft_get_path(char **argv_sp, char **envp);

#endif