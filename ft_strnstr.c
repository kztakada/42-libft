/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:31:17 by katakada          #+#    #+#             */
/*   Updated: 2024/07/05 20:03:45 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *littele, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big)
		return (NULL);
	if (!*littele)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (littele[j] && big[i + j] == littele[j] && i + j < len)
			j++;
		if (!littele[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
