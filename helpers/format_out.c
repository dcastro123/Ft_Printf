/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:46:53 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/24 23:57:51 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			format_width(t_args *ar)
{
	unsigned long	i;

	i = 0;
	if (ft_strlen(ar->tab) > (size_t)ar->width)
		return (ft_putstr(ar->tab));
	while (i < (ar->width - ft_strlen(ar->tab)))
	{
		ft_putchar(' ');
		i++;
	}
}

void			format_precision(t_args *ar)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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
		ft_putchar(ar->tab[j]);
		i++;
		j++;
	}
	while (j < ar->width)
	{
		ft_putchar(' ');
		j++;
	}
}

void			format_ljust(t_args *ar)
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
