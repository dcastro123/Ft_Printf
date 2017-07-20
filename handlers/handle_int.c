/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:33 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/19 19:43:57 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"




// void	check_mod(t_args *ar)
// {
//  	if (ar->mods == l)
//  		ar->str_out = ft_ltoa







// }

void	check_int(t_args *ar)
{
	if ((ar->conv == 'd' || ar->conv == 'i') && ar->mods == none)
		handle_int(ar);
	// else if (ar->conv == 'D' && (ar->mods == l))
	//  	handle_lnum(ar);
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
	//check_mod(ar);
	tmp = ft_itoa(ar->num);
	// printf("width: %u    precision: %d\n", ar->width, ar->precision);
	if (ar->zero == 1 && ar->pflag == 0 && ar->minus == 0)
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
	// else if (ar->pflag == 1)
	// 	format_intprecision(ar, tmp);
	else
	{
		ft_putstr("bye\n");
	}
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
