/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 20:56:27 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/19 22:18:41 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	format_intljust(t_args *ar, char *tmp)
{
	unsigned int	i;

	i = 0;
	if (!(ar->str_out = (char*)malloc(sizeof(char) * (ar->width + 1))))
		return ;
	if (ar->plus == 1 && ar->num >= 0)
		ft_putchar('+');
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
	if (!(ar->str_out = (char*)malloc(sizeof(char) * (ar->width + 1))))
		return ;
	// if (ar->pflag == 1)
	// {
	// 	ar->str_out = format_intprecision(ar, tmp);
	// }
	if (ar->num >= 0 && ar->plus == 1)
	{
			ar->str_out[i] = '+';
			i++;
	}
	if (ar->width > 0)
	{
		while (i < (ar->width - ft_strlen(tmp)))
		{
			ar->str_out[i] = '0';
			i++;
		}
	}
	ar->str_out[i] = '\0';
	ft_strcat(ar->str_out, tmp);
	ft_putstr(ar->str_out);
	ar->ret += ft_strlen(ar->str_out);
	free(ar->str_out);
}

void	format_plus(t_args *ar, char *tmp)
{
	unsigned int i;

	i = 0;
	if (ar->width > ft_strlen(tmp))
	{
		while (i < (ar->width - ft_strlen(tmp)))
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (ar->plus == 1 && ar->num >= 0)
		ft_putchar('+');
	ft_putstr(tmp);
}

void	format_intwidth(t_args *ar, char *tmp)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!(ar->str_out = (char*)malloc(sizeof(char) * (ar->width + 1))))
		return ;
	if (ar->plus == 1 && ar->num >= 0)
		ft_putchar('+');
	while (i < (ar->width - ft_strlen(tmp)))
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

