/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:22:38 by martirod          #+#    #+#             */
/*   Updated: 2024/06/25 15:39:39 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line(char *save)
{
	int		i;
	char	*line;

	i = 0;
	if (!save)
		return (NULL);
	while (save[i] != '\n' && save[i] != '\0')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] != '\n' && save[i] != '\0')
	{
		line[i] = save[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_save(char *save)
{
	int		i;
	int		j;
	char	*new_save;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	while (save[i] != '\n' && save[i] != '\0')
		i++;
	if (save[i] == '\0')
	{
		free(save);
		return (NULL);
	}
	new_save = malloc((ft_strlen(save) - i + 1) * sizeof(char));
	if (!new_save)
		return (NULL);
	i++;
	while (save[i] != '\0')
		new_save[j++] = save[i++];
	new_save[j] = '\0';
	free(save);
	return (new_save);
}

char	ft_read_save(int fd, char *save)
{
	char	*buffer;
	char	*tmp;
	int		bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (-1);
	bytes = read(fd, buffer, BUFFER_SIZE);
	while (bytes > 0)
	{
		buffer[bytes] = '\0';
		tmp = ft_strjoin(save, buffer);
		free(save);
		save = tmp;
		if (ft_strchr(save, '\n'))
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (bytes == 0)
	{
		free(save);
		return (0);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;
	char		ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ret = ft_read_save(fd, save);
	if (ret == -1)
		return (NULL);
	line = ft_line(save);
	save = ft_save(save);
	if (ret == 0)
	{
		free(save);
		save = NULL;
	}
	return (line);
}
