/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:59:27 by katakada          #+#    #+#             */
/*   Updated: 2024/07/29 23:14:33 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*init_zero;

	if (nmemb && size > (SIZE_MAX / nmemb))
		return (NULL);
	init_zero = (void *)malloc(size * nmemb);
	if (!init_zero)
		return (NULL);
	ft_bzero(init_zero, (size * nmemb));
	return (init_zero);
}
