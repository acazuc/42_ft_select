/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:33:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 10:21:03 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	draw_list(t_env *env)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	x = 0;
	y = 0;
	while (i < env->list_size)
	{
		if (x + (long)ft_strlen(env->list[i]) >= tgetnum("co"))
		{
			x = 0;
			y++;
		}
		if (i == env->position)
			ft_putstr(env->caps->underline_start);
		ft_putstr(tgoto(env->caps->move, x, y));
		ft_putstr(env->list[i]);
		if (i == env->position)
			ft_putstr(env->caps->underline_end);
		if (i != env->list_size - 1)
			ft_putchar(' ');
		x += ft_strlen(env->list[i]) + 1;
		i++;
	}
}
