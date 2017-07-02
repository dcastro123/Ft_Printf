/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:46:53 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/26 15:46:59 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_format(t_args *ar)
{
	char *tmp;
	int out_length;
	/* CHECK IF STRLEN IS GREATER THAN WIDTH */
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

void	format_ljust(t_args *ar, char *tmp, int length)
{
	int	i;

	i = 0;
	while (ar->tab[i])
	{
		tmp[i] = ar->tab[i];
		i++;
	}
	if (ar->width > 0)
	{
		while (i < length)
			tmp[i++] = ' ';
	}
}