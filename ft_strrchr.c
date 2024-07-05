/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:13:21 by katakada          #+#    #+#             */
/*   Updated: 2024/07/05 16:29:45 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	unsigned char	*us;
	char			*ret;

	uc = (unsigned char)c;
	us = (unsigned char *)s;
	ret = NULL;
	while (*us)
	{
		if (*us == uc)
			ret = (char *)us;
		us++;
	}
	if (uc == '\0')
		return ((char *)us);
	return (ret);
}
