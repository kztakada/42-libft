/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:30:35 by katakada          #+#    #+#             */
/*   Updated: 2024/07/30 00:52:37 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_char;
	unsigned char	*s2_char;
	size_t			target_index;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	target_index = n;
	while (target_index--)
	{
		if (*s1_char != *s2_char || !*s1_char || !*s2_char)
			return (*s1_char - *s2_char);
		s1_char++;
		s2_char++;
	}
	return (0);
}
