/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 00:14:25 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

/* Function declarations for pipex.c */
void	ft_child_1(int *fd, char **argv, char **envp);
void	ft_child_2(int *fd, char **argv, char **envp);
void	ft_pipex(char **argv, char **envp);

/*			utils			*/
void	ft_free(char **ptr);
int		ft_get_fd(char *file, int mode);
void	ft_check_cmd(int argc, char **argv, char **envp, int i);
char	*ft_get_path(char **argv_sp, char **envp);

#endif