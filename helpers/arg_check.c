/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 23:29:23 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/08 19:23:15 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_asterisk(const char *format, t_args *ar, int index, va_list *ap)
{
	int val;

	if (format[index - 1] == '.')
	{
		val = va_arg(*ap, int);
		ar->precision = val;
	}
	else if (format[index + 1] == '.')
	{
		val = va_arg(*ap, int);
		ar->width = val;
	}
	else
	{
		val = va_arg(*ap, int);
		ar->width = val;
	}
}

void	get_precision(const char *format, t_args *ar, int index, va_list *ap)
{
	int	ret_val;

	ret_val = 0;
	if (format[index + 1] == '*')
	{
		ret_val = va_arg(*ap, int);
		ar->precision = ret_val;
	}
	else if (format[index + 1] > '0' && format[index + 1] <= '9')
		ar->precision = ft_atoi(format + index);
	else if (format[index + 1] == '0')
		ar->str_out = ft_strjoin(ar->str_out, "");
}

void	check_mod(const char *format, t_args *ar, int index)
{
	if (format[index] == 'h' && format[index++] != 'h')
		ar->mods = h;
	else if (format[index] == 'h' && format[index++] == 'h')
		ar->mods = hh;
	else if (format[index] == 'l' && format[index++] != 'l')
		ar->mods = l;
	else if (format[index] == 'l' && format[index++] == 'l')
		ar->mods = ll;
	else if (format[index] == 'z')
		ar->mods = z;
	else if (format[index] == 'j')
		ar->mods = j;
}

void	more_parsing(const char *format, t_args *ar, int index)
{
	if (IS_MOD(format[index]))
		check_mod(format, ar, index);
	if (format[index] == '-')
		ar->minus = 1;
	if (format[index] == '+')
		ar->plus = 1;
	if (format[index] == '#')
		ar->tag = 1;
	if (format[index] == '0' && format[index - 1] != '.')
		ar->zero = 1;
}

void	check_flags(const char *format, t_args *ar, int index, va_list *ap)
{
	ar->mods = 0;
	while (IS_FLAG(format[index]) || IS_NFLAG(format[index]) || IS_MOD(format[index]))
	{
		more_parsing(format, ar, index);
		if (format[index] == '.')
			get_precision(format, ar, index, ap);
		if (format[index] == '*')
			parse_asterisk(format, ar, index, ap);
		else if (format[index] >= '1' && format[index] <= '9')
		{
			ar->width = ft_atoi(format + index);
			while (format[index] >= '0' && format[index] <= '9')
				index++;
		}
		else
			index++;
	}
}
