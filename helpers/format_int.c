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

void	format_intljust(t_args *ar, char *tmp, unsigned int length)
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

void	format_intpadding(t_args *ar, char *tmp)
{
	unsigned int i;

	i = 0;
	tmp = NULL;
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

// void	format_space(t_args *ar, char *tmp)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	if (ar->num > 0)
// 		ft_putchar(' ');
// 	if (ar->width > 0)
// 	{
// 		while (++i < (ar->width - ft_strlen(tmp)))
// 			ft_putchar('0');
// 	}
// }

