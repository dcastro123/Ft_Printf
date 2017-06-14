/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:23:40 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/13 18:15:26 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(const char *format, t_args *ar, int index, va_list *ap)
{
	if (format[index] == 's' || format[index] == 'S')
	{
		ar->conv = va_arg(*ap, int);
		//handle_str(format, ap, ar);
	}
	else if (format[index] == 'c' || format[index] == 'C')
	{
		ar->conv = va_arg(*ap, int);
		//handle_int(format, ap, ar);
	}
	else if (format[index] == 'd' || format[index] == 'i')
	{
		ar->conv = va_arg(*ap, int);
		// handle_int(format, ap, ar);
	}
	else if (format[index] == 'o' || format[index] == 'O' || format[index] == 'x'
			|| format[index] == 'X')
	{
		ar->conv = va_arg(*ap, int);
		// handle_num(format, ap, ar);

	}
	else if (format[index] == 'p')
	{
		ar->conv = va_arg(*ap, int);
		// handle_ptr(format, ap, ar);
	}
}



void	parse_string(const char *format, t_args *ar, int index, va_list *ap)
{

}