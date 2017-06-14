/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 17:34:59 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/08 17:35:26 by dcastro-         ###   ########.fr       */
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
	ar->str_out = ft_strnew(0);
	ar->conv = 0;
}

void	get_args(const char *format, t_args *ar, int index, va_list *ap)
{
	//some variables here maybe?
	check_flags(format, ar, index, ap);
	parse_string(format, ar, index, ap);








}

void	start_conversion(const char *format, t_args *ar, int index, va_list *ap)
{
	init_args(ar);
	get_args(format, ar, index, ap);
}
