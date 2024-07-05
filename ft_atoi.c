/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:08:39 by katakada          #+#    #+#             */
/*   Updated: 2024/07/05 22:03:17 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	handle_overflow(const char *nptr, int sign)
{
	unsigned long	ret;
	int				digit;
	unsigned long	cutoff;

	ret = 0;
	cutoff = (unsigned long)LONG_MAX;
	while (ft_isdigit(*nptr))
	{
		digit = *nptr - '0';
		if (sign == 1 && ret > ((cutoff - digit) / 10))
			return (LONG_MAX);
		if (sign == -1 && ret > ((cutoff + 1 - digit) / 10))
			return (LONG_MIN);
		ret = ret * 10 + digit;
		nptr++;
	}
	return (ret);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	result = (int)handle_overflow(nptr, sign);
	return ((int)(result * sign));
}
