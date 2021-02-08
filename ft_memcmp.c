/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:50:47 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 17:38:07 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;

	source1 = (unsigned char*)s1;
	source2 = (unsigned char*)s2;
	while (source1 && source2 && n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}
