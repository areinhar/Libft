/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:20:47 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/04 18:13:26 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	j;
	char			*out_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(out_str = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		out_str[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[++j])
		out_str[i++] = s2[j];
	out_str[i] = '\0';
	return (out_str);
}
