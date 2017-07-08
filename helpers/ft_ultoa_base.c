/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:59:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/07 16:59:35 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static unsigned long ft_intlen(unsigned long n, int base)
{
	unsigned long len; 

	len = 0;
	while (n != 0)
	{
		len++;
		nbr /= base;
	}
	return (len);
}

char	*ft_uitoa_base(unsigned long value, int base)
{
	char	*array;
	unsigned long val;
	unsigned long len;
	char tab[16];

	val = value;
	len = ft_intlen(val, base);
	ft_strcpy(tab, "0123456789ABCDEF");
	if (!(array = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	array[len--] = '\0';
	if (val == 0)
	{
		array[0] = '0';
		return (array);
	}
	while (val > 0)
	{
		array[len] = tab[val % base];
		val /= base;
		len--;
	}
	return (array);
}
