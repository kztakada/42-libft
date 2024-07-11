/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:49:44 by katakada          #+#    #+#             */
/*   Updated: 2024/07/11 16:27:32 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len_s1;
	size_t	len_set;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	while (ft_strchr(set, *s1) && *s1)
	{
		s1++;
		len_s1--;
	}
	while (ft_strchr(set, s1[len_s1 - 1]) && len_s1)
		len_s1--;
	trim = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, len_s1 + 1);
	return (trim);
}
