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

void	init_mods(t_mods *mod)
{
	mod->hh = 0;
	mod->h = 0;
	mod->l = 0;
	mod->ll = 0;
	mod->j = 0;
	mod->z = 0;
}

void	init_args(t_args *ar)
{
	init_flags(&ar->flag);
	init_mods(&ar->mod);
	if (!(ar->out = ft_memalloc(sizeof(t_args))))
		return ;
	ar->conv = 0;
}
