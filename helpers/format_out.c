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

void	check_format(t_args *ar)
{
	char *tmp;
	unsigned int out_length;

	// out_length = ar->width;
	// tmp = (char*)malloc(sizeof(char) * (out_length));
	if (ft_strlen(ar->tab) > ar->width)
		return (ft_putstr(ar->tab));
	if (IS_TRUE(ar->minus) && (IS_TRUE(ar->zero) || (!(IS_TRUE(ar->zero)))))
	{
		out_length = ar->width;
		tmp = (char*)malloc(sizeof(char) * (out_length + 1));
		tmp[out_length] = '\0';
		format_ljust(ar, tmp, out_length);
		ar->str_out = ft_strdup(tmp);
		if (ar->precision > 0)
		{
			//handle_prec(ar);
			printf("not yet\n");
		}
	}
}

void	format_ljust(t_args *ar, char *tmp, unsigned int length)
{
	unsigned int	i;

	i = 0;
	while (ar->tab[i])
	{
		tmp[i] = ar->tab[i];
		i++;
	}
	if (ar->width > 0)
	{
		if (ft_strlen(ar->tab) > length)
			return ;
		while (i < length)
			tmp[i++] = ' ';
	}
}

void	format_padding(t_args *ar)
{
	unsigned int i;

	i = 0;
	if (ar->num >= 0)
			ft_putchar('+');
	if (ar->width > 0 && ar->zero == 1)
	{
		while (i < (ar->width / 2))
		{
			ft_putchar('0');
			i++;
		}
	}
}

void	format_space(t_args *ar, char *tmp)
{
	unsigned int i;

	i = 0;
	if (ar->num > 0)
		ft_putchar(' ');
	if (ar->width > 0)
	{
		while (++i < (ar->width - ft_strlen(tmp)))
			ft_putchar('0');
	}
}

void	format_width(t_args *ar, char *tmp)
{
	unsigned int i;

	i = 0;
	if (ft_strlen(tmp) > ar->width)
		return (ft_putstr(tmp));
	while (i < (ar->width - ft_strlen(tmp)))
	{
		ft_putchar(' ');
		i++;
	}
	if (ar->plus == 1)
		ft_putchar('+');
}



// if (IS_TRUE(ar->minus) && (IS_TRUE(ar->zero) || (!(IS_TRUE(ar->zero)))))
// 	{
// 		out_length = ar->width;
// 		tmp = (char*)malloc(sizeof(char) * (out_length + 1));
// 		tmp[out_length] = '\0';
// 		format_ljust(ar, tmp, out_length);
// 		ar->str_out = ft_strdup(tmp);
// 		if (ar->precision > 0)
// 		{
// 			//handle_prec(ar);
// 			printf("not yet\n");
// 		}
// 	}





















