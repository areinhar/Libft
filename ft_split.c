/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:39:15 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/04 19:55:02 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**get_arr(const char *s, char c)
{
	char	**arr;
	int		n;
	int		i;
	int		j;

	n = 0;
	i = 0;
	while (s[i])
	{
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (j > i)
		{
			n++;
			i = j;
			continue;
		}
		i++;
	}
	if (!(arr = (char**)malloc((n + 1) * sizeof(char*))))
		return (NULL);
	return (arr);
}

static char	**free_arr(char **str, int count)
{
	int i;

	i = 0;
	while (i < count + 1)
		free(str[i++]);
	free(str);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	int		n;
	int		i;
	int		j;

	if (!s || !(arr = get_arr(s, c)))
		return (NULL);
	n = 0;
	i = -1;
	while (s[++i] != '\0')
	{
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (j > i)
		{
			if (!(arr[n] = (char *)malloc(sizeof(char) * (j - i + 1))))
				return (free_arr(arr, n));
			ft_strlcpy(arr[n++], s + i, j - i + 1);
			i = j - 1;
		}
	}
	arr[n] = 0;
	return (arr);
}
