/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:08:39 by katakada          #+#    #+#             */
/*   Updated: 2024/07/28 19:39:14 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ascii_to_int(const char *nptr, int sign)
{
	unsigned long	value;
	int				digit;
	unsigned long	max_limit;

	value = 0;
	max_limit = (unsigned long)LONG_MAX;
	while (ft_isdigit(*nptr))
	{
		digit = *nptr - '0';
		if (sign == 1 && value > ((max_limit - digit) / 10))
			return (LONG_MAX);
		if (sign == -1 && value > ((max_limit + 1 - digit) / 10))
			return (LONG_MIN);
		value = value * 10 + digit;
		nptr++;
	}
	return (value);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	abs_value;

	sign = 1;
	abs_value = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	abs_value = (int)ascii_to_int(nptr, sign);
	return ((int)(abs_value * sign));
}
