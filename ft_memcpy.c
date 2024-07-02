/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:07:16 by katakada          #+#    #+#             */
/*   Updated: 2024/07/02 18:48:03 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dset, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (!dset && !src)
		return (NULL);
	dst_ptr = (unsigned char *)dset;
	src_ptr = (unsigned char *)src;
	while (n--)
		*dst_ptr++ = *src_ptr++;
	return (dset);
}
