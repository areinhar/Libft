/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:08:04 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 17:55:59 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*memory;
	unsigned char	value;

	index = 0;
	memory = s;
	value = c;
	while (memory && index < n)
		memory[index++] = value;
	return (memory);
}
