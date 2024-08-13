/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:09:11 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:55:33 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of words in a string based on a given delimiter.
 */
static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

/**
 * Extracts a word from a string delimited by a specified character.
 */
static char	*extract_word(const char *s, char c)
{
	char	*word;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = ft_substr(s, 0, len);
	return (word);
}

/**
 * Frees the memory allocated for a dynamically allocated 2D array.
 */
static void	free_tab(char **tab, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/**
 * Extracts words from a string and stores them in an array.
 */
static void	extract_words(char **tab, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			tab[i] = extract_word(s, c);
			if (!tab[i])
			{
				free_tab(tab, i);
				return ;
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	tab[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	extract_words(tab, s, c);
	return (tab);
}
