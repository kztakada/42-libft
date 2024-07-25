/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:49:56 by katakada          #+#    #+#             */
/*   Updated: 2024/07/25 20:28:51 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	idx;

	words = 0;
	idx = 0;
	while (s[idx])
	{
		if (s[idx] != c)
		{
			words++;
			while (s[idx] && s[idx] != c)
				idx++;
		}
		else
			idx++;
	}
	return (words);
}

static char	*get_word(char const *s, char c, int *idx)
{
	char	*word;
	int		i;

	i = 0;
	while (s[*idx] && s[*idx] == c)
		(*idx)++;
	while (s[*idx + i] && s[*idx + i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[*idx] && s[*idx] != c)
		word[i++] = s[(*idx)++];
	word[i] = '\0';
	return (word);
}

static char	**fill_container(char **container, int words, char const *s, char c)
{
	int	idx;
	int	i;

	idx = 0;
	i = 0;
	while (i < words)
	{
		container[i] = get_word(s, c, &idx);
		if (!container[i])
		{
			while (i >= 0)
				free(container[i--]);
			free(container);
			return (NULL);
		}
		i++;
	}
	container[i] = NULL;
	return (container);
}

char	**ft_split(char const *s, char c)
{
	char	**container;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	container = (char **)malloc(sizeof(char *) * (words + 1));
	if (!container)
		return (NULL);
	container = fill_container(container, words, s, c);
	return (container);
}
