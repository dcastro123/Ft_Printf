/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/25 22:58:47 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static	void	format_prec(t_args *ar, char *tmp)
// {
// 	int j;
// 	int i;
// 	int len;

// 	len = (int)ft_strlen(tmp);
// 	j = -1;
// 	i = -1;
// 	if (ar->precision == 0 && *tmp = '0')
// 		ar->str_out = ft_strdup('');
// 	else if (ar->precision > len)
// 	{
// 		ar->str_out = ft_memalloc(ar->precision);
// 		ar->str_out[ar->precision] = '\0';
// 		while (++i < (ar->precision - len))
// 			ar->str_out[i] = '0';
// 		while (++i < ar->precision)
// 			ar->str_out[i] = tmp[++j];
// 	}
// 	else
// 		ar->str_out = ft_strdup(tmp);
// }

void	handle_int(t_args *ar)
{
	char *tmp;

	tmp = ft_itoa(ar->num);
//	format_prec(ar, tmp);
	if (ar->zero == 1 && ar->minus == 0 && ar->pflag == 0)
		format_intpadding(ar, tmp);
	else if (ar->minus == 1)
		format_intljust(ar, tmp);
	else
	{
		format_intwidth(ar, tmp);
		ft_putstr(ar->str_out);
	}
}

void	handle_usint(t_args *ar)
{
	char *tmp;

	tmp = ft_uitoa(ar->unum);
//	format_prec(ar, tmp);
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
	ft_putstr(tmp);
}
