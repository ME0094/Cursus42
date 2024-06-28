/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:22:57 by martirod          #+#    #+#             */
/*   Updated: 2024/06/28 15:00:08 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	int		bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(save, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(save);
			return (NULL);
		}
		buffer[bytes] = '\0';
		save = ft_strjoin(save, buffer);
	}
	free(buffer);
	return (save);
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
