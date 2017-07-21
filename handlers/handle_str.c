/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:34:16 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/20 21:29:58 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static void	handle_null(t_args *ar)
// {
// 	char tmp[6];

// 	ft_strcpy(tmp, "(null)");
// 	ar->tab = ft_strdup(tmp);
// 	if (ar->minus == 1)
// 	{
// 		printf("@@@@@@@@\n");
// 		format_ljust(ar);
// 	}
// 	else if (ar->width > 0)
// 	{
// 		printf("&&&&&&&&\n");
// 		if (ar->precision > 0)
// 			format_precision(ar);
// 		else
// 			format_width(ar);
// 	}
// 	else
// 		ft_putstr(tmp);
// }

void	handle_rstr(t_args *ar)
{
	if (ar->tab == NULL)
		return (ft_putstr("(null)"));
	if (ar->zero == 1)
		return (ft_putstr(""));
	if (ar->minus == 1)
		format_ljust(ar);
	else
	{
		if (ar->width > 0)
		{
			format_width(ar);
			ft_putstr(ar->tab);
		}
		else if (ar->precision >= 0 && ar->pflag == 1)
			format_precision(ar);
		else
			ft_putstr(ar->tab);
	}
}

void	handle_char(t_args *ar)
{
	unsigned int i;

	i = -1;
	if (ar->width > 0)
	{
		while (++i < ar->width)
			ft_putchar(' ');
		ft_putchar(ar->num);
	}
	else
		ft_putchar(ar->num);
}

void	check_str(t_args *ar)
{
	if (ar->conv == 'c')
		handle_char(ar);
	else if (ar->conv == 's')
		handle_rstr(ar);
	else if (ar->conv == 'S')
		printf(" S feature not implemented yet\n");
	else if (ar->conv == 'C')
		ft_putchar(ar->num);
}
