/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/21 16:13:15 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	check_int(t_args *ar)
{
	if ((ar->conv == 'd' || ar->conv == 'i') && ar->mods == none)
		handle_int(ar);
	else if (ar->conv == 'D' && (ar->mods == l))
	 	handle_lnum(ar);
	// else if (ar->mods == ll)
	// 	handle_llnum(ar->conv);
	// else if (ar->mods == h)
	// 	handle_short((short)ar->num);
	// else if (ar->mods == l)
	// 	handle_lnum((long) ar->num);






}

void	handle_int(t_args *ar)
{
	char *tmp;

	tmp = ft_itoa(ar->num);
	if (ar->width > 0 && ar->minus == 0 && ar->precision == 0)
	{
		if (ft_strlen(tmp) > ar->width)
			return (ft_putstr(tmp));
		format_intwidth(ar, tmp);
	//	ft_putstr(tmp);
	}
	else if (ar->width > 0 && ar->zero == 1)
	{
		format_intpadding(ar, tmp);
		ft_putstr(tmp);
	}
	else if (ar->space == 1 && ar->plus == 0)
	{
		format_intspace(ar, tmp);
		ft_putstr(tmp);
	}
	else if (ar->minus == 1)
	{
		format_intljust(ar, tmp);
		ft_putstr(ar->str_out);
	}
	else
	{
		if (ar->plus == 1 && ar->num >= 0)
			ft_putchar('+');
		ft_putstr(tmp);
	}
	//tmp = ft_itoa_base(ar->num, 10);
	// ft_putstr(tmp);
}

void	handle_usint(t_args *ar)
{
	char *tmp;
	tmp = ft_uitoa(ar->unum);
	ft_putstr(tmp);









}

// void	handle_llnum()
// {







// }

// void	handle_short()
// {





// }
