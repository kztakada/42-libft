/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:49:44 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 22:28:00 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*oneside_trim;
	size_t		untrimmed_len;
	char		*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	oneside_trim = s1;
	untrimmed_len = ft_strlen(s1);
	while (*oneside_trim && ft_strchr(set, *oneside_trim))
	{
		oneside_trim++;
		untrimmed_len--;
	}
	while (untrimmed_len && ft_strchr(set, oneside_trim[untrimmed_len - 1]))
		untrimmed_len--;
	trimmed_str = (char *)malloc(sizeof(char) * (untrimmed_len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, oneside_trim, untrimmed_len + 1);
	return (trimmed_str);
}
