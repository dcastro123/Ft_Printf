/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:58:28 by dcastro-          #+#    #+#             */
/*   Updated: 2017/04/21 16:56:00 by dcastro-         ###   ########.fr       */
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

int					ft_printf(const char *format, ...);
void				print_s(char *str);
#endif
