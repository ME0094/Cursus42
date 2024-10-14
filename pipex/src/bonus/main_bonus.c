/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:14:08 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 18:34:22 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

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
