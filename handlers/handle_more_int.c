/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_more_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:08:13 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/19 20:56:35 by dcastro-         ###   ########.fr       */
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
		if (ar->tag == 1)
		{
			ft_putstr("0");
			ft_putstr(tmp);
		}
		else
			ft_putstr(tmp);
	}
	// else if (ar->mods == ll)
	// {
	// 	tmp = ft_lltoa_base((long long)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == l)
	// {
	// 	tmp = ft_ltoa_base((long)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == z)
	// {
	// 	tmp = ft_stoa_base((size_t)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == h)
	// {
	// 	tmp = ft_htoa_base((short)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == hh)
	// {
	// 	tmp = ft_hhtoa_base((char)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }
	// else if (ar->mods == j)
	// {
	// 	tmp = ft_jtoa_base((intmax_t)ar->unum, 8);
	// 	ft_putstr(tmp);
	// }





}

void	handle_hex(t_args *ar)
{
		char *tmp;

		if (ar->mods == none && ar->conv == 'x')
		{
			tmp = ft_uitoa_base(ar->unum, 16);
			if (ar->tag == 1)
			{
				ft_putstr("0x");
				ft_putstr(tmp);
			}
			else
				ft_putstr(tmp);
		}
		else if (ar->mods == none && ar->conv == 'X')
		{
			tmp = ft_uitoa_capbase(ar->unum, 16);
			if (ar->tag == 1)
			{
				ft_putstr("0X");
				ft_putstr(tmp);
			}
			else
				ft_putstr(tmp);
		}
		// else if (ar->mods == hh)
		// 	printf("hh not implemented yet\n");
		// else if (ar->mods == h)
		// 	printf("h not implemented yet\n");
		// else if (ar->mods == l)
		// 	printf("l not implemented yet\n");
		// else if (ar->mods == ll)
		// 	printf("ll not implemented yet\n");
		// else if (ar->mods == z)
		// 	printf("z nnot implemented yet\n");
		// else if (ar->mods == j)
		// 	printf("j not implemented yett\n");
		// else
		// 	printf("wtf are u trying to do\n");






}

void	handle_ptr(t_args *ar)
{
	char *tmp;

	tmp = ft_ultoa_base(ar->ulong, 16);
	ft_putstr("0x");
	ft_putstr(tmp);

}
// void	handle_upperhex()
// {








// }