/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:19:32 by katakada          #+#    #+#             */
/*   Updated: 2024/07/04 18:32:48 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	uc;
	int				ctolower;

	if (c != -1)
		uc = (unsigned char)c;
	if (uc >= 'A' && uc <= 'Z')
	{
		ctolower = (int)(uc - 'A' + 'a');
		return (ctolower);
	}
	return (c);
}
