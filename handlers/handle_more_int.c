/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_more_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:08:13 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/21 16:10:11 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// void	handle_sizet()
// {








// }

void	handle_oct(t_args *ar)
{
	char *tmp;
	if (ar->mods == none && ar->conv == 'o')
	{
		tmp = ft_uitoa_base(ar->unum, 8);
		ft_putstr(tmp);
	}
	// else if (ar->mods == ll)
	// {
	// 	tmp = ft_lltoa_base((long long)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == l)
	// {
	// 	tmp = ft_ltoa_base((long)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == z)
	// {
	// 	tmp = ft_stoa_base((size_t)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == h)
	// {
	// 	tmp = ft_htoa_base((int)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == hh)
	// {
	// 	tmp = ft_hhtoa_base((int)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == j)
	// {
	// 	tmp = ft_jtoa_base((intmax_t)ar->conv, 8);
	// 	ft_putstr(tmp);
	// }





}

void	handle_hex(t_args *ar)
{
		char *tmp;
		if (ar->mods == none && ar->conv == 'x')
		{
			tmp = ft_uitoa_base(ar->unum, 16);
			ft_putstr(tmp);
		}
		// else
		// 	handle_upperhex(ar);






}

void	handle_ptr(t_args *ar)
{
	ft_putstr("hello");
	ar->str_out = "goodbye";
	// char *tmp;
	// char tmp2[2];
	// unsigned long val;

	// ft_strcpy(tmp2, "0x");
	// val = (unsigned long)ar->unum;
	// tmp = ft_ultoa_base(val, 16);
	// ar->str_out = ft_strjoin(tmp2, tmp);
	// ft_putstr(ar->str_out);

}
// void	handle_upperhex()
// {








// }