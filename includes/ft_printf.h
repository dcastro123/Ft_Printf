/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:58:28 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/23 21:10:51 by dcastro-         ###   ########.fr       */
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
#define IS_NFLAG(x)	((x == 45 || x == 46 || (x > 47 && x < 58) ? 1 : 0)
#define IS_MOD(x)	((x > a && x < z) ? 1: 0)

typedef	struct 	s_mods
{
	int hh;
	int h;
	int l;
	int ll;
	int j;
	int z;
}				t_mods;

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
	int precision;
	int width;
	int asterisk;
}				t_args;

int					ft_printf(const char *format, ...);

int					check_flags();
int					check_precision();
int					check_width();
int					check_mod();
int					do_conv(va_list args, const char *tmp);


unsigned	int		ft_convert(unsigned int a, int base);

void	init_flags(t_flags *flag);
void	init_mods(t_mods *mod);
void	init_args(t_args *ar);
void	start_conversion(const char *format, t_args *ar);			
#endif
