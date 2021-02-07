/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:54:02 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 21:00:48 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	long			answer;

	i = 0;
	sign = 1;
	answer = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		nptr++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		nptr++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		if ((answer = answer * 10 + (nptr[i++] - '0')) < 0)
			return (sign == 1 ? -1 : 0);
	return (answer * sign);
}
