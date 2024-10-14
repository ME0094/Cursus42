/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:25:10 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

void	check_command(char *arg, char **envp);
void	ft_check_cmd(int argc, char **argv, char **envp, int i);
void	ft_free(char **ptr);
char	*ft_get_path(char **argv_sp, char **envp);
int		ft_get_fd(char *file, int mode);
void	handle_error(const char *msg);
void	handle_fork_error(void);
void	handle_pipe_error(void);
int		open_file(char *file, int flags, const char *error_msg);

#endif