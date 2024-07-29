/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:38:03 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 17:13:31 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	search_char;
	unsigned char	*target_pos;

	search_char = (unsigned char)c;
	target_pos = (unsigned char *)s;
	while (*target_pos)
	{
		if (*target_pos == search_char)
			return ((char *)target_pos);
		target_pos++;
	}
	if (search_char == '\0')
		return ((char *)target_pos);
	return (NULL);
}
