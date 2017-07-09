/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:58:28 by dcastro-          #+#    #+#             */
/*   Updated: 2017/07/07 17:00:22 by dcastro-         ###   ########.fr       */
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
# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <wchar.h>

#define IS_FLAG(x)	((x == 32 || x == 35 || x == 42 || x == 43) ? 1 : 0)
#define IS_NFLAG(x)	((x == 45 || x == 46 || (x > 47 && x < 58)) ? 1 : 0)
#define IS_MOD(x)	((x > 'h' && x < 'z') ? 1: 0)
#define IS_TRUE(x)  ((x == 1) ? 1 : 0)

typedef	enum 	e_mods
{
	none,
	hh,
	h,
	l,
	ll,
	j,
	z,
}				t_mods;

typedef	struct 	s_args
{
	char *str_out;
	char conv;
	char *tab;
	int index;
	int space;
	int plus;
	int minus;
	int tag;
	int zero;
	int num;
	unsigned int unum;
	unsigned int precision;
	unsigned int width;
	unsigned long ulong;
	t_mods	mods;
}				t_args;

int					ft_printf(const char *format, ...);
void				init_args(t_args *ar);
void				start_conversion(const char *format, t_args *ar, va_list *ap);

void				check_flags(const char *format, t_args *ar, va_list *ap);
void				get_precision(const char *format, t_args *ar, va_list *ap);
void				check_mod(const char *format, t_args *ar);
void				parse_asterisk(const char *format, t_args *ar, va_list *ap);
void				check_type(const char *format, t_args *ar, va_list *ap);


void	check_format(t_args *ar);
void	format_ljust(t_args *ar, char *tmp, unsigned int length);
void	format_padding(t_args *ar);
void	format_space(t_args *ar, char *tmp);
void	format_width(t_args *ar, char *tmp);

void	check_str(t_args *ar);
void	handle_char(t_args *ar);
void	handle_rstr(t_args *ar);

void	format_intpadding(t_args *ar, char *tmp);
void	format_intwidth(t_args *ar, char *tmp);
void	format_intljust(t_args *ar, char *tmp, unsigned int length);
void	check_int(t_args *ar);
void	handle_ptr(t_args *ar);
void	handle_int(t_args *ar);
void	handle_oct(t_args *ar);
void	handle_hex(t_args *ar);
char	*ft_uitoa_base(int value, int base);
char	*ft_ultoa_base(unsigned long value, int base);
char	*ft_itoa_base(int value, int base);
#endif
