/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:27:27 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/23 19:52:12 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	int	ft_intlen(int n, int base)
{
	int		len;
	long	nbr;

	len = 0;
	nbr = (long)n;
	if (nbr < 0 && base == 10)
	{
		len++;
		nbr *= -1;
	}
	else if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		len++;
		nbr /= base;
	}
	return (len);
}

char		*ft_itoa_base(int value, int base)
{
	char	*array;
	long	val;
	int		len;
	char	tab[16];

	val = (long)value;
	len = ft_intlen(val, base);
	tab[16] = "0123456789ABCDEF";
	if (!(array = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	array[len--] = '\0';
	if (val == 0)
	{
		array[0] = '0';
		return (array);
	}
	if (val < 0 && (base == 10))
	{
		val *= -1;
		array[0] = '-';
	}
	else if (val < 0)
		val *= -1;
	while (val > 0)
	{
		array[len] = tab[val % base];
		val /= base;
		len--;
	}
	return (array);
}
