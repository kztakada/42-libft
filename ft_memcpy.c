/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:07:16 by katakada          #+#    #+#             */
/*   Updated: 2024/07/24 17:45:44 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;

	if (!dest || !src)
		return (dest);
	d_ptr = dest;
	if (dest != src)
	{
		while (n--)
			*d_ptr++ = *(unsigned char *)src++;
	}
	return (dest);
}
