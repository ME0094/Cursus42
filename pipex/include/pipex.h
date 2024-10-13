/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:45:04 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 19:19:03 by martirod         ###   ########.fr       */
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

/* Utility functions */
void	free_string_array(char **array);
int		get_file_descriptor(char *file, int mode);
void	check_commands(int argc, char **argv, char **envp, int i);
char	*get_command_path(char **cmd_args, char **envp);
char	**split_string(char const *s, char c);

#endif