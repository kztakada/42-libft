/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:01:47 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 18:03:57 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	target_pos;

	if (!dst || !src)
		return (0);
	target_pos = 0;
	if (size)
	{
		while (src[target_pos] && (target_pos < (size - 1)))
		{
			dst[target_pos] = src[target_pos];
			target_pos++;
		}
		dst[target_pos] = '\0';
	}
	return (ft_strlen(src));
}
