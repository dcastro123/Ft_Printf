/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 19:35:37 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/16 22:36:42 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

static int	get_nbr_len(uintmax_t value, unsigned int base)
{
	int len;

	len = 1;
	while (value >= base)
	{
		len++;
		value = value / base;
	}
	return (len);
}

static char	get_digit(uintmax_t value, unsigned int base, int upper)
{
	int		digit;
	char	c;

	digit = (value % base);
	if (digit >= 0 && digit < 10)
		c = digit + '0';
	else
	{
		if (upper)
			c = digit + 'A' - 10;
		else
			c = digit + 'a' - 10;
	}
	return (c);
}

static char		*ft_itoa_base1(uintmax_t value, unsigned int base, int upper)
{
	int		len;
	char	*nbr;

	len = get_nbr_len(value, base);
	nbr = (char*)malloc(sizeof(char) * (len + 1));
	nbr[len--] = 0;
	while (value >= base)
	{
		nbr[len--] = get_digit(value, base, upper);
		value = value / base;
	}
	nbr[len] = get_digit(value, base, upper);
//	printf("array is :  |%s|\n", nbr);
	return (nbr);
}

int	main(void)
{
	unsigned long x = 18446744073709551488;
	printf("tom uitoa unsigned long: %s\n", ft_itoa_base1((unsigned long)x, 10, 0));
	ft_printf("x is : %lu\n", x);
}