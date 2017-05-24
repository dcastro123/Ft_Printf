/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:30:56 by dcastro-          #+#    #+#             */
/*   Updated: 2017/04/21 17:30:58 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_print_arg(va_list args, const char *tmp)
{
	if (*tmp == 's')
		return (print_s(va_arg(args, char *)));
	else if (*tmp == 'd' || *tmp == 'i')
		return (print_d(va_arg(args, int)));
	else if (*tmp == 'c')
		return (print_c(va_arg(args, int)));
	else if (*tmp == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (*tmp == 'o')
		return (ft_convert(va_arg(args), 8));
	else if (*tmp == 'p' || *tmp == 'x' || *tmp == 'X')
		return (print_hex_base(va_arg(args, unsigned long)));
	return (0);
}