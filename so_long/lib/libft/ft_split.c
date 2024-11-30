/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:09:11 by martirod          #+#    #+#             */
/*   Updated: 2024/08/19 18:45:58 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freetab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i] != NULL)
		free(tab[i++]);
	free(tab);
}

int	ft_countdelim(char const *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str && str[i])
	{
		while (str[i] && ft_strchr(charset, str[i]))
			i++;
		if (str[i] == '\0')
			break ;
		counter++;
		while (str[i] && !ft_strchr(charset, str[i]))
			i++;
	}
	return (counter);
}

char	*ft_strtsub(char const *str, int start, int end)
{
	int		i;
	char	*var;

	i = 0;
	var = ft_calloc(sizeof(char), end - start + 1);
	if (!var)
		return (NULL);
	while (((start + i) < end) && str[i])
	{
		var[i] = str[start + i];
		i++;
	}
	return (var);
}

char	**to_tab(char **tab, char const *s, char *charset, int count)
{
	int	i;
	int	index;
	int	start;

	i = 0;
	index = 0;
	while (index < count)
	{
		while (s[i] && ft_strchr(charset, s[i]))
			i++;
		start = i;
		while (s[i] && (!ft_strchr(charset, s[i])))
			i++;
		tab[index] = ft_strtsub(s, start, i);
		if (!tab[index++])
		{
			freetab(tab);
			return (NULL);
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset, int *size)
{
	char	**tab;

	if (!str || !*str)
		return (ft_calloc(sizeof(char *) * 1, 1));
	*size = ft_countdelim(str, charset);
	tab = ft_calloc(sizeof(char *) * (*size + 1), 1);
	if (!tab)
		return (NULL);
	tab = to_tab(tab, str, charset, *size);
	return (tab);
}
