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
	unsigned long i;

	i = 0;
	while (i < (ar->width - ft_strlen(ar->tab)))
	{
		ft_putchar(' ');
		i++;
	}
}

void	format_precision(t_args *ar)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if ((unsigned int)ar->precision == 0)
	{
		while (i < ar->width)
		{
			ft_putchar(' ');
			i++;
		}
	}
	while (i < (unsigned int)ar->precision)
	{
		ft_putchar(ar->tab[i]);
		i++;
		j++;
	}
	while (j < ar->width)
	{
		ft_putchar(' ');
		j++;
	}
}

void	format_ljust(t_args *ar)
{
	unsigned int	i;

	i = 0;
	if (ar->precision >= 0 && ar->pflag == 1 && ar->width > 0)
		format_precision(ar);
	else if (ar->width > 0 && ar->pflag == 0)
		format_width(ar);
	else
	{
		while (ar->tab[i])
			ft_putchar(ar->tab[i++]);
	}
	if (ar->width > 0 && ar->pflag == 0)
		format_width(ar);
}