/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:49:25 by katakada          #+#    #+#             */
/*   Updated: 2024/07/30 00:08:32 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*move_dest;
	unsigned char	*move_src;
	size_t			target_index;

	if (!dest || !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	move_dest = (unsigned char *)dest;
	move_src = (unsigned char *)src;
	target_index = 0;
	move_dest += n;
	move_src += n;
	while (n > target_index++)
		*--move_dest = *--move_src;
	return (dest);
}
