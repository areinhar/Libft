/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:48:42 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 19:19:44 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *altdest;
	unsigned char *altsrc;

	altdest = (unsigned char*)dest;
	altsrc = (unsigned char*)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
		while (n--)
			altdest[n] = altsrc[n];
	return (dest);
}
