/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:07:16 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 23:40:52 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	size_t			target_index;

	if (!dest || !src)
		return (dest);
	cpy_dest = (unsigned char *)dest;
	cpy_src = (unsigned char *)src;
	target_index = 0;
	if (dest != src)
	{
		while (n > target_index++)
			*cpy_dest++ = *cpy_src++;
	}
	return (dest);
}
