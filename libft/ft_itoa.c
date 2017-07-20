/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:00:43 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/19 19:47:15 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n >= 10 || n <= -10)
	{
		i++;
		n /= 10;
	}
	i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int 	sign;

	i = num_len(n) - 1;
	sign = 1;
	if (n < 0)
		sign = -1;
	if (!(str = (char *)malloc(sizeof(char) * (num_len(n) + 1))))
		return (NULL);
	str[i + 1] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		str[0] = '-';
	while (n > 9)
	{
		str[i--] = sign * (n % 10) + '0';
		n /= 10;
	}
	if (n >= 0 && n <= 9)
		str[i] = n + '0';
	return (str);
}
