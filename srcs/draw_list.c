/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:33:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 17:50:37 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void		draw_color(t_item *item, int x)
{
	int		i;

	ft_putstr("\033[");
	ft_putnbr(item->is_bright ? 1 : 0);
	ft_putchar(';');
	ft_putnbr(item->color);
	ft_putchar('m');
	if ((int)(x + ft_strlen(item->name)) >= tgetnum("co"))
	{
		i = 0;
		while (x + i < tgetnum("co"))
		{
			ft_putchar(item->name[i]);
			i++;
		}
	}
	else
		ft_putstr(item->name);
	ft_putstr("\033[0;0m");
}

static void		print_value(t_env *env, t_item_list *lst, int x)
{
	if (lst->item->selected)
		ft_putstr(env->caps->highlight_start);
	if (lst == env->curr)
		ft_putstr(env->caps->underline_start);
	draw_color(lst->item, x);
	if (lst == env->curr)
		ft_putstr(env->caps->underline_end);
	if (lst->item->selected)
		ft_putstr(env->caps->highlight_end);
}

static void		check_column(int *x, int *y, size_t *max_width)
{
	if (*y >= tgetnum("li"))
	{
		*x += *max_width + 1;
		*y = 0;
		*max_width = 0;
	}
}

void			draw_list(t_env *env)
{
	t_item_list		*lst;
	size_t			max_width;
	int				x;
	int				y;

	if (env->old_width != tgetnum("co")
			|| env->old_height != tgetnum("li"))
	{
		ft_putstr(tgetstr("cl", 0));
		env->old_width = tgetnum("co");
		env->old_height = tgetnum("li");
	}
	x = 0;
	y = 0;
	max_width = 0;
	lst = env->items;
	while (lst)
	{
		check_column(&x, &y, &max_width);
		if (x >= tgetnum("co"))
			return ;
		ft_putstr(tgoto(env->caps->move, x, y));
		print_value(env, lst, x);
		if (ft_strlen(lst->item->name) > max_width)
			max_width = ft_strlen(lst->item->name);
		y++;
		lst = lst->next;
	}
}
