/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/25 00:01:57 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		format_prec2(t_args *ar, char *tmp)
{
	int len;

	len = (int)ft_strlen(tmp);
	if (ar->precision < width)
	{
		ar->str_out = ft_memalloc(ar->width);
		if (ar->precision > len)
		{
		}




	}
	else if (ar->precision == ar->width)
	{





	}
}

static	void	format_precwidth(t_args *ar, char *tmp)
{
	int j;
	int len;

	len = (int)ft_strlen(tmp);
	j = -1;
	if (ar->precision > ar->width)
	{
		if (ar->precision > len)
		{
			ar->str_out = ft_memalloc(ar->precision);
			ft_memset(ar->str_out, '0', (ar->precision - len));
			while (len > 0)
				ar->str_out[len--] = tmp[++j];
		}
		else
			ar->str_out = ft_strdup(tmp);
	}
	else if (ar->precision < ar->width || ar->precision == ar->width)
		format_prec2(ar, tmp);
}

void	handle_int(t_args *ar)
{
	char *tmp;

	tmp = ft_itoa(ar->num);
	// if (ar->precision > 0)
	// 	format_precwidth(ar, tmp);
	if (ar->zero == 1 && ar->minus == 0)
		format_intpadding(ar, tmp);
	else if (ar->space == 1)
	{
		format_intspace(ar, tmp);
		ft_putstr(tmp);
	}
	else if (ar->minus == 1)
	{
		format_intljust(ar, tmp);
		ft_putstr(ar->str_out);
	}
	else if (ar->plus == 1)
		format_plus(ar, tmp);
	else if (ar->width > 0)
	{
		format_intwidth(ar, tmp);
		ft_putstr(ar->str_out);
	}
	else
		ft_putstr(tmp);
}

void	handle_usint(t_args *ar)
{
	char *tmp;
	tmp = ft_uitoa(ar->unum);
	ft_putstr(tmp);
}
