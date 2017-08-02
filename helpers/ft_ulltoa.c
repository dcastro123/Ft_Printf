/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 15:44:20 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/02 15:45:19 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static unsigned long long	num_len(unsigned long long nbr)
{
	unsigned long long	i;

	i = 0;
	while (nbr > 9)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char						*ft_ulltoa(unsigned long long n)
{
	char	*str;
	int		i;

	i = num_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (num_len(n) + 1))))
		return (NULL);
	str[i] = '\0';
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	if (n > 0 && n <= 9)
		str[i] = n + '0';
	return (str);
}
