/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:13:21 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 20:10:16 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	search_char;
	unsigned char	*target_str;
	size_t			target_index;

	search_char = (unsigned char)c;
	target_str = (unsigned char *)s;
	target_index = ft_strlen(s) + 1;
	while (target_index)
	{
		target_index--;
		if (*(target_str + target_index) == search_char)
			return ((char *)(target_str + target_index));
	}
	return (NULL);
}
