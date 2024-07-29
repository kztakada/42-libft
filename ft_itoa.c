/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:50:21 by katakada          #+#    #+#             */
/*   Updated: 2024/07/28 20:06:04 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	ncpy;
	int		digit_pos;
	char	*str;

	ncpy = n;
	digit_pos = numlen(n);
	str = (char *)malloc(sizeof(char) * (digit_pos + 1));
	if (!str)
		return (NULL);
	str[digit_pos] = '\0';
	if (ncpy < 0)
	{
		str[0] = '-';
		ncpy *= -1;
	}
	if (ncpy == 0)
		str[0] = '0';
	while (ncpy)
	{
		str[--digit_pos] = ncpy % 10 + '0';
		ncpy /= 10;
	}
	return (str);
}
