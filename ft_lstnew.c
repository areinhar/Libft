/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:05:43 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 20:43:36 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	if (!content)
		new->content = NULL;
	else
		new->content = content;
	new->next = NULL;
	return (new);
}
