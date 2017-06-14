/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 17:15:05 by dcastro-          #+#    #+#             */
/*   Updated: 2017/04/26 18:52:35 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static	unsigned int	calc_len(unsigned int nbr, int base)
{
	unsigned int len;

	len = 0;
	while ((nbr / base) != 0)
	{
		len++;
		nbr /= base;
	}
	len++;
	return (len);
}

unsigned int					ft_convert(unsigned int a, int base)
{
	unsigned int	*con;
	unsigned int	i;
	unsigned int	length;

	length = calc_len(a, base);
	con = (unsigned int *)ft_memalloc(length);
	i = length;
	while ((int)i-- > 0)
	{
		con[i] = a % base;
		a /= base;
	}
	return (*con);
}
