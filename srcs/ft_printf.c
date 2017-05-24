/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:31:21 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/23 20:53:01 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_list arg_cpy;
	const char	*tmp;
	unsigned int i;
	char	*s;
	int		ret;

	va_start(args, format);
	va_copy(arg_cpy, args);
	tmp = format;
	//ft_parse_format(args, format); //still need to implement this function
	
	while (*tmp != '\0')
	{
		if (*tmp == '%')
		{
			tmp++;
			if (*tmp == '%')
				ft_putchar(*tmp);
			tmp++;
		}
		tmp++;
		//code here later to iterate through and run multiple argss
		// args_check(tmp, ...)
		
		//right now only handles 1 args after % sign
	}
	va_end(args);
	return (1);
}
