/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:16 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/17 18:21:19 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_rstr(t_args *ar)
{
		if (!ar->tab)
		return (ft_putendl("(null)"));
	if (ar->zero == 1)
		return (ft_putstr(""));
	if (ar->minus == 1)
		format_ljust(ar);
	else
	{
		if (ar->width > 0)
		{
			format_width(ar);
			ft_putstr(ar->tab);
		}
		else if (ar->precision >= 0 && ar->pflag == 1)
			format_precision(ar);
		else
			ft_putstr(ar->tab);
	}
}

void	handle_char(t_args *ar)
{
	unsigned int i;

	i = 0;
	if (ar->mods == none)
	{
		if (ar->width > 0)
		{
			while (i < ar->width)
			{
				ft_putchar(' ');
				i++;
			}
		}
		ft_putchar(ar->num);
	}
	else if (ar->mods == l)
		printf("rip invalid for now\n");
	else
		ft_putchar(ar->num);
}

void	check_str(t_args *ar)
{
	if (ar->conv == 'c')
		handle_char(ar);
	else if (ar->conv == 's')
		handle_rstr(ar);
	else if (ar->conv == 'S')
		printf(" S feature not implemented yet\n");
	else if (ar->conv == 'C')
		printf("C feature not implemented yet\n");
	else
		printf("wtf is this\n");
}
