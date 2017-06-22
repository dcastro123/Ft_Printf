/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 17:34:59 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/21 19:33:38 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_args(t_args *ar)
{
	ar->space = 0;
 	ar->plus = 0;
 	ar->zero = 0;
 	ar->tag = 0;
 	ar->precision = 0;
 	ar->width = 0;
	ar->conv = 0;
	ar->tab = NULL;
	ar->num = 0;
	ar->unum = 0;
}
void	check_type(const char *format, t_args *ar, int index, va_list *ap)
{
	if (format[index] == 'c' || format[index] == 'C')
	{
		ar->conv = format[index];
		ar->num = va_arg(*ap, int);
		check_str(ar);
	}
	else if (format[index] == 's' || format[index] == 'S')
	{
		ar->conv = format[index];
		ar->tab = ft_strdup(va_arg(*ap, char*));
		check_str(ar);
	}
	 else if (format[index] == 'd' || format[index] == 'i')
	 {
		 ar->num = va_arg(*ap, long long);
		 check_int(ar);
	 }
	else if (format[index] == 'o' || format[index] == 'O')
	 {
	 	ar->conv = format[index];
	 	ar->unum = va_arg(*ap, unsigned int);
	 	handle_oct(ar);
	 }
	 else if (format[index] == 'x' || format[index] == 'X')
	 {
	 	ar->conv = format[index];
	 	ar->unum = va_arg(*ap, unsigned int);
	 	handle_hex(ar);
	 }
	// else if (format[index] == 'p')
	// {
	// 	ar->num = va_arg(*ap, unsigned int);
	// 	// handle_ptr(format, ap, ar);
	// }
}

void	start_conversion(const char *format, t_args *ar, int index, va_list *ap)
{
	init_args(ar);
	check_flags(format, ar, index, ap);
	check_type(format, ar, index, ap);
}
