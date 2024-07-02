/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:49:25 by katakada          #+#    #+#             */
/*   Updated: 2024/07/02 19:00:15 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dset, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (!dset && !src)
		return (NULL);
	dst_ptr = (unsigned char *)dset;
	src_ptr = (unsigned char *)src;
	if (dst_ptr < src_ptr)
	{
		while (n--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += n;
		src_ptr += n;
		while (n--)
			*--dst_ptr = *--src_ptr;
	}
	return (dset);
}
