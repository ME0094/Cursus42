/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 19:37:30 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

typedef int	t_pid;
void	validate_arguments(int argc);
int		ft_check_input(char **argv);
void	ft_check_cmd(int argc, char **argv, char **envp, int i);
void	handle_pipe_error(void);
void	handle_fork_error(void);
void	handle_error(const char *msg);
void	ft_free(char **ptr);
int		ft_get_fd(char *file, int mode);
void	ft_pipex(char **argv, char **envp);
void	handle_fork_and_process(int argc, char **argv, char **envp, int i);
void	child_process(int *pipefd, char **argv, char **envp);
void	child_process_logic(int *fd, char *cmd, char **envp);
void	child_process_logic_1(int *fd, char **argv, char **envp);
void	child_process_logic_2(int *fd, char **argv, char **envp);
void	dup_and_close(int oldfd, int newfd);
void	execute_command(char *path, char **argv_sp, char **envp);
void	ft_dups(int argc, char **argv);
void	ft_child(char *cmd, char **envp);
char	*ft_get_path(char **argv_sp, char **envp);
void	ft_child_1(int *fd, char **argv, char **envp);
void	ft_child_2(int *fd, char **argv, char **envp);

#endif