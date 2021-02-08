/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:54:27 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 18:50:07 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	if (!src || !dst)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (src[i])
		{
			if (i < size - 1)
				dst[i] = src[i];
			else
				break ;
			i++;
		}
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
