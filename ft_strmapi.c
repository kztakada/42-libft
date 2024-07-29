/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:50:35 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 18:14:06 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	str_index;
	char			*generated_str;

	if (!s || !f)
		return (NULL);
	generated_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!generated_str)
		return (NULL);
	str_index = 0;
	while (s[str_index])
	{
		generated_str[str_index] = f(str_index, s[str_index]);
		str_index++;
	}
	generated_str[str_index] = '\0';
	return (generated_str);
}
