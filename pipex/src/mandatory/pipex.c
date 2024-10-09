/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:15:20 by martirod          #+#    #+#             */
/*   Updated: 2024/10/09 17:25:29 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void child_process(char **argv, char **envp, int *fd) {
    int filein;

    filein = open(argv[1], O_RDONLY, 0); // Use 0 for read-only permission
    if (filein == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    dup2(filein, STDIN_FILENO);
    dup2(fd[1], STDOUT_FILENO);
    close(fd[0]);

    if (execve(argv[2], argv + 2, envp) == -1) { // Start from argv[2]
        perror("execve");
        exit(EXIT_FAILURE);
    }
}

void parent_process(char **argv, char **envp, int *fd) {
    int fileout;

    fileout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644); // Use 0644 for read/write permission
    if (fileout == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    dup2(fd[0], STDIN_FILENO);
    dup2(fileout, STDOUT_FILENO);
    close(fd[1]);

    if (execve(argv[3], argv + 3, envp) == -1) { // Start from argv[3]
        perror("execve");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char **argv, char **envp) {
    int fd[2];
    pid_t pid1;

    if (argc != 5) {
        fprintf(stderr, "Error: Bad arguments\n");
        fprintf(stderr, "Ex: ./pipex <file1> <cmd1> <cmd2> <file2>\n");
        return EXIT_FAILURE;
    }

    if (pipe(fd) == -1) {
        perror("pipe");
        return EXIT_FAILURE;
    }

    pid1 = fork();
    if (pid1 == -1) {
        perror("fork");
        return EXIT_FAILURE;
    }

    if (pid1 == 0) {
        child_process(argv, envp, fd);
    } else {
        waitpid(pid1, NULL, 0);
        parent_process(argv, envp, fd);
    }

    return EXIT_SUCCESS;
}