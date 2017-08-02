/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/02 15:30:44 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	*check_imod(t_args *ar)
{
	char *tmp;

	tmp = NULL;
	if (ar->mods == hh)
		tmp = ft_itoa((char)ar->num);
	else if (ar->mods == h)
		tmp = ft_itoa((short)ar->num);
	else if (ar->mods == l)
		tmp = ft_ltoa((long)ar->num);
	return (tmp);
}
void	handle_int(t_args *ar)
{
	char *tmp;

	tmp = check_imod(ar);
	format_prec(ar, tmp);
	if (ar->zero == 1 && ar->minus == 0 && ar->pflag == 0)
		format_intpadding(ar, tmp);
	else if (ar->minus == 1)
		format_intljust(ar, tmp);
	else if (ar->width > 0)
	{
		format_intwidth(ar, tmp);
		ft_putstr(ar->str_out);
	}
	else
	{
		if (ar->space == 1 && ar->num >= 0)
			ar->ret += write(1, " ", 1);
		if (ar->plus == 1 && ar->num >= 0)
			ar->ret += write(1, "+", 1);
		ft_putstr(tmp);
	}
}

void	handle_usint(t_args *ar)
{
	char *tmp;

	tmp = ft_uitoa(ar->unum);
	format_prec(ar, tmp);
	if (ar->zero == 1 && ar->minus == 0 && ar->pflag == 0)
		format_intpadding(ar, tmp);
	else if (ar->minus == 1)
		format_intljust(ar, tmp);
	else if (ar->width > 0)
	{
		format_intwidth(ar, tmp);
		ft_putstr(ar->str_out);
	}
	else
		ft_putstr(tmp);
}
