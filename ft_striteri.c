/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:50:49 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 17:26:01 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	str_index;

	if (!s || !f)
		return ;
	str_index = 0;
	while (s[str_index])
	{
		f(str_index, &s[str_index]);
		str_index++;
	}
}
