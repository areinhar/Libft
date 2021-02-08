/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:20:35 by areinhar          #+#    #+#             */
/*   Updated: 2021/01/21 19:27:29 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	total;
	size_t	i;

	total = (nmemb * size);
	ptr = (void*)malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total--)
		ptr[i++] = 0;
	return (ptr);
}
