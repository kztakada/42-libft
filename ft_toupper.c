/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:00:26 by katakada          #+#    #+#             */
/*   Updated: 2024/07/06 18:29:20 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	ctoupper;

	if (c >= 'a' && c <= 'z')
	{
		ctoupper = c + ('A' - 'a');
		return (ctoupper);
	}
	return (c);
}
