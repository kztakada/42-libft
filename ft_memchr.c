/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:02:11 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 23:24:27 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	search_char;
	unsigned char	*search_target;
	size_t			target_index;

	search_char = (unsigned char)c;
	search_target = (unsigned char *)s;
	target_index = 0;
	while (n > target_index++)
	{
		if (*search_target == search_char)
			return ((void *)search_target);
		search_target++;
	}
	return (NULL);
}
