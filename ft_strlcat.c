/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:39:09 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 17:51:10 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	src_pos;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	if (!dst)
		return (0);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	src_pos = 0;
	while (src[src_pos] && (src_pos < (size - dst_len - 1)))
	{
		dst[dst_len + src_pos] = src[src_pos];
		src_pos++;
	}
	dst[dst_len + src_pos] = '\0';
	return (dst_len + src_len);
}
