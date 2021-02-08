/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:15:43 by areinhar          #+#    #+#             */
/*   Updated: 2021/01/27 23:13:30 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*out_str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(out_str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		out_str[i] = f(i, s[i]);
		i++;
	}
	out_str[i] = '\0';
	return (out_str);
}
