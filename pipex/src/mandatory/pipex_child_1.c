/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_child_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:31:36 by martirod          #+#    #+#             */
/*   Updated: 2024/10/13 22:35:26 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

static int open_input_file(char *file)
{
    int input_fd = get_file_descriptor(file, 0);
    if (input_fd < 0)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }
    return input_fd;
}

static int open_output_file(char *file)
{
    int output_fd = get_file_descriptor(file, 1);
    if (output_fd < 0)
    {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }
    return output_fd;
}
