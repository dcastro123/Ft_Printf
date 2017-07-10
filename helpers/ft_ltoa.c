/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:45:19 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/09 19:45:21 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

static long	num_len(long nbr)
{
	long	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while ((nbr / 10) != 0)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}

char		*ft_ltoa(long n)
{
	char	*str;
	long		i;

	i = num_len(n) - 1;
	if (!(str = (char *)malloc(sizeof(char) * (num_len(n) + 1))))
		return (NULL);
	str[i + 1] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	if (n >= 0 && n <= 9)
		str[i] = n + '0';
	return (str);
}