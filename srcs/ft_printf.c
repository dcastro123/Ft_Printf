/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:31:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/23 20:53:01 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_list arg_cpy;
	const char	*tmp;
	size_t		ret;

	va_start(args, format);
	va_copy(arg_cpy, args);
	tmp = format;
	ret = 0;
	while (*tmp != '\0')
	{
		if (*tmp == '%')
		{
			tmp++;
			if (*tmp == '%')
			{
				ft_putchar(*tmp);
				ret++;
			}
			else
			{
				ret++;
				ft_print_arg(args, )
			}
			tmp++;
		}
		else if (*tmp != '%')
		{
			ft_putchar(*tmp);
			ret++;
			tmp++;
		}
	}
	va_end(args);
	return (ret);
}
