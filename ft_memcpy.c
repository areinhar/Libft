/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:47:27 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 17:54:30 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*altdest;
	unsigned char	*altsrc;

	altdest = (unsigned char *)dest;
	altsrc = (unsigned char *)src;
	if (!altdest && !altsrc)
		return (dest);
	while (n > 0)
	{
		*altdest = *altsrc;
		altdest++;
		altsrc++;
		n--;
	}
	return (dest);
}
