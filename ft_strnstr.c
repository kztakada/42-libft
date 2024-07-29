/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:31:17 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 19:27:16 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *littele, size_t len)
{
	size_t	b_pos;
	size_t	l_len;

	if (!big)
		return (NULL);
	if (!*littele)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	b_pos = 0;
	l_len = ft_strlen(littele);
	while (big[b_pos] && (b_pos + l_len) <= len)
	{
		if (ft_strncmp(&big[b_pos], littele, l_len) == 0)
			return ((char *)&big[b_pos]);
		b_pos++;
	}
	return (NULL);
}
