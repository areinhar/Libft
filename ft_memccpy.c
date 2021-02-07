/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:49:42 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 17:36:58 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*altdest;
	unsigned char	*altsrc;

	index = 0;
	altdest = (unsigned char*)dest;
	altsrc = (unsigned char*)src;
	while (altdest && altsrc && n > 0)
	{
		altdest[index] = altsrc[index];
		if (altsrc[index] == (unsigned char)c)
			return (altdest + index + 1);
		index++;
		n--;
	}
	return (NULL);
}
