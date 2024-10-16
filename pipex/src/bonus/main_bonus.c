/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:14:08 by martirod          #+#    #+#             */
/*   Updated: 2024/10/16 16:47:16 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/**
 * This file contains the main function which serves as the entry point for the
 * bonus part of the pipex project. It validates the arguments, checks the input,
 * verifies the commands, duplicates file descriptors, and handles the forking
 * and processing of commands.
 */
int	main(int argc, char **argv, char **envp)
{
	int	i;

	validate_arguments(argc);
	i = ft_check_input(argv);
	ft_check_cmd(argc, argv, envp, i);
	ft_dups(argc, argv);
	handle_fork_and_process(argc, argv, envp, i);
	return (0);
}
