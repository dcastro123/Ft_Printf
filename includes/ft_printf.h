/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:58:28 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/13 18:19:02 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/types.h>
# include "../libft/libft.h"
# include <stdarg.h>
# include <limits.h>
# include <wchar.h>

#define IS_FLAG(x)	((x == 32 || x == 35 || x == 42 || x == 43) ? 1 : 0)
#define IS_NFLAG(x)	((x == 45 || x == 46 || (x > 47 && x < 58)) ? 1 : 0)
#define IS_MOD(x)	((x > 'a' && x < 'z') ? 1: 0)

typedef	enum 	e_mods
{
	none,
	hh,
	h,
	l,
	ll,
	j,
	z,
}				mods;

typedef	struct 	s_args
{
	char *str_out;
	int out_length;
	char conv;
	int space;
	int plus;
	int minus;
	int tag;
	int zero;
	unsigned int precision;
	unsigned int width;
	int asterisk;
}				t_args;

int					ft_printf(const char *format, ...);
void				init_args(t_args *ar);
void				start_conversion(const char *format, t_args *ar, int index, va_list *ap);

void				check_flags(const char *format, t_args *ar, int index, va_list *ap);
void				get_precision(const char *format, t_args *ar, int index, va_list *ap);
void				check_mod(const char *format, t_args *ar, int index);
void				get_args(const char *format, t_args *ar, int index, va_list *ap);
void				parse_asterisk(const char *format, t_args *ar, int index, va_list *ap);
void				check_type(const char *format, t_args *ar, int index, va_list *ap);
void				parse_string(const char *format, t_args *ar, int index, va_list *ap);


unsigned int		ft_convert(unsigned int a, int base);
			
#endif
