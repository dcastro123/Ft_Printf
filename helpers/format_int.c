/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 20:56:27 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/02 20:56:33 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	format_intljust(t_args *ar, char *tmp)
{
	unsigned int	i;

	i = 0;
	if (!(ar->str_out = (char*)malloc(sizeof(char) * (ar->width + 1))))
		return ;
	while (tmp[i])
	{
		ar->str_out[i] = tmp[i];
		i++;
	}
	if (ar->width > 0)
	{
		if (ft_strlen(tmp) > ar->width)
			return (ft_putstr(tmp));
		while (i < ar->width)
			ar->str_out[i++] = ' ';
	}
	ar->str_out[i] = '\0';
}

void	format_intpadding(t_args *ar, char *tmp)
{
	unsigned int i;

	i = 0;
	if (ar->num >= 0 && ar->plus == 1)
			ft_putchar('+');
	// if (ar->width > 0 && ar->pflag == 0)
	// {
	// 	while (i < (ar->width - ft_strlen(tmp)))
	// 	{
	// 		ft_putchar('0');
	// 		i++;
	// 	}
	// }
	else if (ar->width > 0 && ar->pflag == 1)
	{
		if (IS_TRUE(ar->space))
		{
			i++;
			ft_putchar(' ');
		}
		if (ar->width > (unsigned int)ar->precision)
		while (i < ar->width - ft_strlen(tmp))
		{
			i++;
			ft_putchar(' ');
		}
		while (i < (unsigned int)ar->precision)
		{
			ft_putchar(tmp[i]);
			i++;
		}
	}
	ft_putstr(tmp);
}

void	format_intwidth(t_args *ar, char *tmp)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (ar->plus == 1)
	{
		ft_putchar('+');
		i++;
	}
	if (ar->zero == 1)
	{
		ft_putchar('0');
		i++;
	}
	while (i < (ar->width - ft_strlen(tmp)))
	{
		ft_putchar(' ');
		i++;
	}
	while (i < ar->width)
	{
		ft_putchar(tmp[j]);
		j++;
		i++;
	}
}
void	format_intspace(t_args *ar, char *tmp)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	if (ar->num > 0)
	{
		i++;
		ft_putchar(' ');
	}
	if (ar->width > 0)
	{
		while (i < (ar->width - ft_strlen(tmp)))
		{
			ft_putchar(' ');
			i++;
		}
	}
}

