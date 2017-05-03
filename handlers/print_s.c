/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 18:01:19 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/02 17:25:47 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	get_length(char *str)
{
	size_t len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

static	void	ft_putnstr(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_s(char *str)
{
	size_t length;

	length = get_length(str);
	ft_putnstr(str, length);
}
