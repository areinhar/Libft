/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <areinhar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:49:09 by areinhar          #+#    #+#             */
/*   Updated: 2021/01/23 16:34:34 by areinhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_nb_digit(unsigned int nr, int sign)
{
	unsigned int	nb_digit;

	if (nr == 0)
		return (1);
	nb_digit = 0;
	while (nr > 0)
	{
		nr /= 10;
		nb_digit++;
	}
	if (sign == -1)
		nb_digit++;
	return (nb_digit);
}

static void			convert_nb(char *string, unsigned int nr,
		unsigned int nb_digit, int sign)
{
	string[nb_digit] = '\0';
	if (nr == 0)
	{
		string[0] = '0';
		return ;
	}
	while (nr > 0)
	{
		string[--nb_digit] = nr % 10 + '0';
		nr /= 10;
	}
	if (sign == -1)
		string[0] = '-';
}

char				*ft_itoa(int n)
{
	char			*string;
	unsigned int	nr;
	unsigned int	nb_digit;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		nr = (unsigned int)n * -1;
		sign = -1;
	}
	else
		nr = n;
	nb_digit = get_nb_digit(nr, sign);
	if (!(string = malloc(sizeof(char) * (nb_digit + 1))))
		return (NULL);
	convert_nb(string, nr, nb_digit, sign);
	return (string);
}
