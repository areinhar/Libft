/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:46:22 by areinhar          #+#    #+#             */
/*   Updated: 2021/02/07 20:36:50 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst && *lst && new)
	{
		first = *lst;
		while (first->next)
			first = first->next;
		first->next = new;
	}
	else if (lst && !*lst && new)
		*lst = new;
}
