/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 22:37:26 by dcastro-          #+#    #+#             */
/*   Updated: 2017/06/01 22:37:35 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_args(t_args *ar)
{
	ar.space = 0;
 	ar.plus = 0;
 	ar.zero = 0;
 	ar.tag_x = 0;
 	ar.tag_X = 0;
 	ar.tag_o = 0;
 	ar.precision = 0;
 	ar.width = 0;
	ar.out = ft_strnew(0);
	ar.conv = 0;
}
