/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:16 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/21 16:03:30 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	check_str(t_args *ar)
{
	// char tmp;
	// char *strtmp;
	if (ar->conv == 'c')
		handle_char(ar);
	// else if (fmt[index] == 'C')
	// 	handle_wchar(ar, ap);
	else if (ar->conv == 's' && ar->mods == none)
		handle_rstr(ar);
	else
	{
		printf("ar->conv : %c\n", ar->conv);
		printf("feature not implemented yet\n");
	}










}

void	handle_rstr(t_args *ar)
{
	//printf("handle--rstr\n");
	if (ar->minus == 1 || ar->plus == 1 || ar->width > 0 || ar->space == 1
		|| ar->zero == 1)
	{
		check_format(ar);
		ft_putstr(ar->str_out);
	}
//	printf("str before output: %s\n", ar->str_out);
	else
	{
		ar->str_out = ft_strdup(ar->tab);
		ft_putstr(ar->str_out);
	}
	//printf("done handle_rstr\n");










}

// void	handle_wstr()
// {











// }

void	handle_char(t_args *ar)
{
	//printf("--handlechar--\n");
	if (ar->mods == none)
		ft_putchar(ar->num);
	//else if
	//	printf("rip invalid for now\n");
	//printf("end handle char\n");










}

// void	handle_wchar()
// {








// }
