/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:31:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/04/23 17:14:39 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list arg;
	va_list arg_cpy;
	const char	*tmp;
	unsigned int i;
	char	*s;

	va_start(arg, format);
	va_copy(arg_cpy, arg);
	tmp = format;
	while (*tmp != '\0' && *tmp != '%')
	{
		ft_putchar(*tmp);
		tmp++;
	}
	tmp++;
	//code here later to iterate through and run multiple args
	// arg_check(tmp, ...)
	//right now only handles 1 arg after % sign
	if (*tmp == 's')
	{
		s = va_arg(arg, char *);
		print_s(s);
	}
	if (*tmp == 'd' || *tmp == 'i')
	{
		i = va_arg(arg, int);
		print_d(i);
	}
	if (*tmp == 'c')
	{
		i = va_arg(arg, int);
		print_c(i);
	}
	if (*tmp == 'u')
	{
		i = va_arg(arg, unsigned int);
		print_u(i);
	}
	if (*tmp == 'o')
	{
		i = va_arg(arg, unsigned int);
		ft_conv_eight(i);
	}
	// if (*tmp == 'p')
	// {
	// 	i = va_arg(arg, void *);
	// }
	return (1);

}
