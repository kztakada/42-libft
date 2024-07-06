/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:19:32 by katakada          #+#    #+#             */
/*   Updated: 2024/07/06 18:31:04 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	ctolower;

	if (c >= 'A' && c <= 'Z')
	{
		ctolower = c - ('A' - 'a');
		return (ctolower);
	}
	return (c);
}
