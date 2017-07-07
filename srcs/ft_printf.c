/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:31:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/21 15:26:53 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ret;
	t_args		ar;

	va_start(ap, format);
	ret = 0;
	ar.index = 0;
	while (format[ar.index] != '\0')
	{
		if (format[ar.index] == '%' && format[ar.index + 1] != '%')
		{
			// ar.index++;
			start_conversion(format, &ar, &ap);
			// ar.index++;
			ret++;
		}
		else if (format[ar.index] == '%' && format[ar.index + 1] == '%')
		{
			ft_putchar('%');
			ret++;
			ar.index += 2;
		}
		else
		{
			ft_putchar(format[ar.index]);
	//		ar.index++;
			ret++;
		}
//		ar.index++;
	}
	va_end(ap);
	return (ret);
}
