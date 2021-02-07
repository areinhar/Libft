/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:52:09 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 18:03:12 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		i;

	i = 0;
	alts = (char*)s;
	altc = c;
	while (alts && alts[i] != altc)
	{
		if (alts[i++] == '\0')
			return (NULL);
	}
	return (alts + i);
}
