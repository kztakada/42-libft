/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:10:05 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 22:54:39 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*set_target;
	size_t			set_index;
	unsigned char	init_char;

	set_target = (unsigned char *)s;
	init_char = (unsigned char)c;
	set_index = 0;
	while (set_index < n)
	{
		set_target[set_index] = init_char;
		set_index++;
	}
	return (s);
}
