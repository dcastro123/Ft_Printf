/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:46:53 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/02 14:26:58 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	format_width(t_args *ar)
{
	unsigned int i;

	i = 0;
	if (ft_strlen(ar->tab) > ar->width)
		return (ft_putstr(ar->tab));
	while (i < (ar->width - ft_strlen(ar->tab)))
	{
		ft_putchar(' ');
		i++;
	}
}

void	format_precision(t_args *ar)
{
	unsigned int i;

	i = 0;
	if (ar->precision == 0)
	{
		while (i < ar->width)
		{
			ft_putchar(' ');
			i++;
		}
	}
	while (i < ar->precision)
	{
		ft_putchar(ar->tab[i]);
		i++;
	}
}

void	format_ljust(t_args *ar)
{
	unsigned int	i;

	i = 0;
	if (ar->precision >= 0 && ar->pflag == 1)
		format_precision(ar);
	else
	{
		while (ar->tab[i])
			ft_putchar(ar->tab[i++]);
	}
	if (ar->width > 0)
		format_width(ar);
}