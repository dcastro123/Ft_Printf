/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 23:29:23 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/01 23:29:45 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	check_flag()
{
	while (IS_FLAG(format[index]) || IS_NFLAG(format[index]) || IS_MOD(format[index]))
	{
		if (IS_MOD(format[index]))
		{
			check_mod();
		}
		if (format[index] == '-')
		{
			ar->minus = 1;
		}
		if (format[index] == '+')
		{
			ar->plus = 1;
		}
		if (format[index] == '#')
		{
			ar->tag = 1;
		}
		if (format[index] == '0')
		{
			ar->zero = 1;
		       



}

void	check_mod()
{







}

void	get_args(const char *format, t_args *ar, int index)
{
	//some variables here maybe?
	check_flag();
	check_mod();
	check_type();








}
