/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:31:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/09 20:35:26 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	const char	*tmp;
	unsigned int i;
	char	*s;
	int		ret;

	va_start(args, format);
	tmp = format;
	//ft_parse_format(args, format); //still need to implement this function
	while (*tmp != '\0')
	{
		while (*tmp != '%')
		{
			ft_putchar(*tmp);
			tmp++;
		}
		tmp++;
		//code here later to iterate through and run multiple argss
		// args_check(tmp, ...)
		//right now only handles 1 args after % sign
		if (*tmp == 's')
		{
			s = va_args(args, char *);
			print_s(s);
			tmp++;
		}
		if (*tmp == 'd' || *tmp == 'i')
		{
			i = va_args(args, int);
			print_d(i);
			tmp++;
		}
		if (*tmp == 'c')
		{
			i = va_args(args, int);
			print_c(i);
			tmp++;
		}
		if (*tmp == 'u')
		{
			i = va_args(args, unsigned int);
			print_u(i);
			tmp++;
		}
		if (*tmp == 'o')
		{
			i = va_args(args, unsigned int);
			ft_convert(i, 8);
			printf("\n");
			tmp++;
		}
		if (*tmp == 'x')
		{
			i = va_args(args, unsigned int);
			ft_convert(i, 16);
			tmp++;
		}
		 if (*tmp == 'p')
		 {
			 i = va_args(args, unsigned long);
			 print_p(i);
			 tmp++;
		 }
	}
	va_end(args);
	return (1);
}
