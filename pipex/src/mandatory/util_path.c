/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:20:53 by martirod          #+#    #+#             */
/*   Updated: 2024/10/14 17:54:07 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

static char **ft_make_path(char **argv_sp, char **envp) {
    char *path_str;
    char **path_sp;
    int i = 0;
    while (!ft_strnstr(envp[i], "PATH=", 5)) i++;
    path_str = ft_substr(envp[i], 5, ft_strlen(envp[i]));
    path_sp = ft_split(path_str, ':');
    free(path_str);
    i = 0;
    while (path_sp[i]) {
        path_sp[i] = ft_strjoin_free(path_sp[i], "/");
        path_sp[i] = ft_strjoin_free(path_sp[i], argv_sp[0]);
        i++;
    }
    return path_sp;
}

char *ft_get_path(char **argv_sp, char **envp) {
    int i = -1;
    char **path_sp = ft_make_path(argv_sp, envp);
    char *result;
    while (path_sp[++i]) {
        if (!access(path_sp[i], F_OK)) {
            result = ft_substr(path_sp[i], 0, ft_strlen(path_sp[i]));
            ft_free(path_sp);
            return result;
        }
    }
    ft_free(path_sp);
    return NULL;
}
