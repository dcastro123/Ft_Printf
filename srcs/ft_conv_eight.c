/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_eight.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 17:15:05 by dcastro-          #+#    #+#             */
/*   Updated: 2017/04/23 18:14:17 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	unsigned int	calc_len(int nbr)
{
	unsigned int len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while ((nbr / 8) != 0)
	{
		len++;
		nbr /= 8;
	}
	a++;
	return (len);
}

unsigned int			ft_convert_eight(unsigned int a)
{
	unsigned int	*oct;
	unsigned int	i;
	unsigned int	length;

	length = calc_len(a) - 1;
	if (!(oct = (int *)malloc(sizeof(int) * (calc_len(a) + 1))))
		return (NULL);
	oct[length + 1] = '\0';
	if (a == 4294967295)
		return (ft_strdup("4294967295"));
	i = 0;
	while (a > 0)
	{
		oct[i] = a % 8;
		i++;
		a /= 8;
	}
	if (n >= 0 && n <= 8)
		oct[i] = a;
	return (oct);
}
