/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:33:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:37:36 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	draw_list(t_env *env)
{
	t_item_list		*lst;
	size_t			max_width;
	int				x;
	int				y;

	x = 0;
	y = 0;
	max_width = 0;
	lst = env->items;
	while (lst)
	{
		if (y >= tgetnum("li"))
		{
			x += max_width + 1;
			y = 0;
			max_width = 0;
		}
		ft_putstr(tgoto(env->caps->move, x, y));
		if (lst->item->selected)
			ft_putstr(env->caps->highlight_start);
		if (lst == env->curr)
			ft_putstr(env->caps->underline_start);
		ft_putstr(lst->item->name);
		if (lst == env->curr)
			ft_putstr(env->caps->underline_end);
		if (lst->item->selected)
			ft_putstr(env->caps->highlight_end);
		if (ft_strlen(lst->item->name) > max_width)
			max_width = ft_strlen(lst->item->name);
		y++;
		lst = lst->next;
	}
}
