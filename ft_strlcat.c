/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:53:38 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 18:47:09 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	len;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	len = 0;
	while (*dst && size > 0)
	{
		dst++;
		len++;
		size--;
	}
	if ((dlen - len) >= size)
		return (slen + len);
	if (size == 0)
		return (slen);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (slen + dlen);
}
