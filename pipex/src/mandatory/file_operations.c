/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:28:09 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 17:53:25 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void ft_free(char **ptr) {
    int i = 0;
    while (ptr[i]) free(ptr[i++]);
    free(ptr);
}

int open_file(char *file, int flags, const char *error_msg) {
    int fd = open(file, flags, 0644);
    if (fd < 0) {
        perror(error_msg);
        exit(EXIT_FAILURE);
    }
    return fd;
}

int ft_get_fd(char *file, int mode) {
    int fd;
    if (mode == 0) {
        fd = open_file(file, O_RDONLY, "Error opening input file");
    } else if (mode == 1) {
        fd = open_file(file, O_CREAT | O_RDWR | O_TRUNC, "Error opening output file");
    } else {
        fd = open_file(file, O_CREAT | O_RDWR | O_APPEND, "Error opening file with append mode");
    }
    return fd;
}
