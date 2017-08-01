/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:46:53 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/31 22:39:09 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			format_str(t_args *ar)
{
	char *tmp;
	int len;
	int i;

	len = (int)ft_strlen(ar->tab);
	tmp = ft_strdup(ar->tab);
	i = -1;
	if (ar->precision == 0)
		return ;
	else if (ar->precision < len)
	{
		tmp = ft_memalloc(ar->precision);
		while (++i < ar->precision)
			tmp[i] = ar->tab[i];
		free(ar->tab);
		ar->tab = ft_strdup(tmp);
	}
	else
		ar->tab = ar->tab;
}

void			print_str(t_args *ar)
{
	int	i;
	int len;

	i = -1;
	len = (int)ft_strlen(ar->tab);
	if (ar->precision == 0)
		while (++i < ar->width)
			ar->ret += write(1, " ", 1);
	else if (ar->width > len)
	{
		while (++i < ar->width - len)
			ft_putchar(' ');
		ft_putstr(ar->tab);
		ar->ret += ft_strlen(ar->tab) + ar->width;
	}
	else
	{
		ft_putstr(ar->tab);
		ar->ret += ft_strlen(ar->tab);
	}
}

void			print_ljust(t_args *ar)
{
	int i;
	int len;

	i = -1;
	len = (int)ft_strlen(ar->tab);
	if (ar->width > 0)
	{
		if (ar->width < len)
			while (len-- > 0)
				ft_putchar(ar->tab[++i]);
		else
		{
			while (ar->tab[++i])
				ft_putchar(ar->tab[i]);
			while (i++ < ar->width)
				ft_putchar(' ');
		}
		ar->ret += ft_strlen(ar->tab) + ar->width;
	}
	else
	{
		ft_putstr(ar->tab);
		ar->ret += ft_strlen(ar->tab);
	}
}
