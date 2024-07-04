/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:00:26 by katakada          #+#    #+#             */
/*   Updated: 2024/07/04 18:33:59 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	uc;
	int				ctoupper;

	if (c != -1)
		uc = (unsigned char)c;
	if (uc >= 'a' && uc <= 'z')
	{
		ctoupper = (int)(uc - 'a' + 'A');
		return (ctoupper);
	}
	return (c);
}
