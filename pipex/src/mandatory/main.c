/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:17:32 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 15:31:08 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"
#include <stdlib.h>

int main(int argc, char **argv, char **envp) {
    if (argc != 5) {
        ft_putstr_fd("Invalid argument number. Check and try again\n", 2);
        exit(EXIT_FAILURE);
    }
    ft_check_cmd(argc, argv, envp, 2);
    ft_pipex(argv, envp);
    return 0;
}
