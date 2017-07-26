/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 20:56:27 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/25 23:11:34 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	format_intljust(t_args *ar, char *tmp)
{
	int	i;
	int len;

	i = -1;
	len = (int)ft_strlen(tmp);
	if (ar->plus == 1 && ar->num >= 0)
	{
		ft_putchar('+');
		ar->ret++;
	}
	while (ar->str_out[++i])
	{
		ft_putchar(ar->str_out[i]);
		ar->ret++;
	}
	if (ar->width > 0)
	{
		i = -1;
		if (len > ar->width)
			return ;
		while (++i < ar->width)
		{
			ft_putchar(' ');
			ar->ret++;
		}
	}
}

void	format_intpadding(t_args *ar, char *tmp)
{
	int i;

	i = -1;
	int len = (int)ft_strlen(tmp);
	if (ar->num >= 0 && ar->plus == 1)
	{
		ft_putchar('+');
		ar->ret++;
	}
	if (ar->width > 0)
	{
		while (++i < (ar->width - len))
		{
			ar->str_out[i] = '0';
			ar->ret++;
		}
	}
	ar->ret += ft_strlen(ar->str_out);
}

void	format_intwidth(t_args *ar, char *tmp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	int len = (int)ft_strlen(tmp);
	ar->str_out = ft_memalloc(ar->width);
	if (ar->plus == 1 && ar->num >= 0)
		ft_putchar('+');
	while (i < ar->width - len)
	{
		ar->str_out[i] = ' ';
		i++;
	}
	while (i < ar->width)
	{
		ar->str_out[i] = tmp[j];
		j++;
		i++;
	}
	ar->str_out[i] = '\0';
	ar->ret += ft_strlen(ar->str_out) > 0 ? ft_strlen(ar->str_out) : ft_strlen(tmp);
}

