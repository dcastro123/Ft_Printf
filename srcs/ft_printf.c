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

void	start_conversion(const char *format, t_args *ar, int index)
{
	init_args(ar);
	get_args(format, ar, index);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ret;
	t_args		ar;
	int			index;

	va_start(ap, format);
	ret = 0;
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%' && format[index++] != '%')
		{
			start_conversion(format, &ar);
			//check everything
			//ret++;
		}
		else if (format[index] == '%' && format[index++] == '%')
		{
			ft_putchar('%');
			ret++;
			index += 2;
		}
		else
		{
			ft_putchar(format[index]);
			ret++;
		}
		index++;
	}
	va_end(ap);
	return (ret);
}
