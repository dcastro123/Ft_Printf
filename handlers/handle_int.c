/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/26 19:00:07 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_int(t_args *ar)
{
	char *tmp;

	tmp = ft_itoa(ar->num);
	format_prec(ar, tmp);
	// printf("string after precision formatting: '%s'\n", ar->str_out);
	if (ar->zero == 1 && ar->minus == 0 && ar->pflag == 0)
		format_intpadding(ar, tmp);
	else if (ar->minus == 1)
		format_intljust(ar, tmp);
	else if (ar->width > 0)
	{
		format_intwidth(ar);
		ft_putstr(ar->str_out);
	}
	else
		ft_putstr(ar->str_out);
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
		format_intwidth(ar);
		ft_putstr(ar->str_out);
	}
	else
		ft_putstr(tmp);
}
