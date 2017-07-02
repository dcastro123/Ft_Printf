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

#include "ft_printf.h"

void	check_str(t_args *ar)
{
	// char tmp;
	// char *strtmp;
	if (ar->conv == 'c')
		ft_putchar('c');
	// else if (fmt[index] == 'C')
	// 	handle_wchar(ar, ap);
	else if (ar->conv == 's')
		handle_rstr(ar);
	else
		printf("feature not implemented yet\n");










}

void	handle_rstr(t_args *ar)
{
	//printf("handle--rstr\n");
	check_format(ar);
//	printf("str before output: %s\n", ar->str_out);
	if (ar->mods == none)
		ft_putstr(ar->str_out);
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
