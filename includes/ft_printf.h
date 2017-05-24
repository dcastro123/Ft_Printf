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
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/types.h>
# include "../libft/libft.h"
# include <stdarg.h>

# define ABS(x)	(x < 0) ? -x : x

typedef	struct		s_pformat
{
	char				*conv;
	int					num_flags;
	char				*arg_list;//?
	struct s_pformat	*next;
	int					format_size;
	int					user_width;
	int					user_precision;
}					t_pformat;

int					ft_printf(const char *format, ...);

void				print_s(char *str);
void				print_d(int i);
void				print_c(unsigned int i);
void				print_u(unsigned int i);
void				print_p(unsigned long a);

void				ft_convert(unsigned int a, int base);
#endif
