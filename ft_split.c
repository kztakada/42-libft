/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:49:56 by katakada          #+#    #+#             */
/*   Updated: 2024/07/28 23:40:43 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	w_count;
	int	s_index;

	w_count = 0;
	s_index = 0;
	while (s[s_index])
	{
		if (s[s_index] != c)
		{
			w_count++;
			while (s[s_index] && s[s_index] != c)
				s_index++;
		}
		else
			s_index++;
	}
	return (w_count);
}

static int	get_cpylen(char const *s, int s_start, char c)
{
	int	cpylen;

	cpylen = 0;
	while (s[s_start + cpylen] && s[s_start + cpylen] != c)
		cpylen++;
	return (cpylen);
}

static void	*free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static char	**fill_strs(char **strs, int words, char const *s, char c)
{
	int	s_start;
	int	cpylen;
	int	i;

	s_start = 0;
	i = 0;
	while (i < words)
	{
		while (s[s_start] && s[s_start] == c)
			s_start++;
		cpylen = get_cpylen(s, s_start, c);
		strs[i] = ft_substr(s, s_start, cpylen);
		if (!strs[i])
			return (free_strs(strs));
		s_start += cpylen;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		w_count;

	if (!s)
		return (NULL);
	w_count = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!strs)
		return (NULL);
	strs = fill_strs(strs, w_count, s, c);
	if (!strs)
		return (NULL);
	return (strs);
}
