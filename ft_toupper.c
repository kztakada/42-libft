/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:00:26 by katakada          #+#    #+#             */
/*   Updated: 2024/07/04 18:17:49 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	uc;

	if (c != -1)
		uc = (unsigned char)c;
	if (uc >= 'a' && uc <= 'z')
	{
		c = (int)(uc - 'a' + 'A');
		return (c);
	}
	return (c);
}
