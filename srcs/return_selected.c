/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_selected.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:17:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:22:09 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	return_selected(t_env *env)
{
	t_item_list		*lst;
	int				printed;

	terminal_normal_mode();
	ft_putstr(tgetstr("te", 0));
	ft_putstr(tgetstr("ve", 0));
	printed = 0;
	lst = env->items;
	while (lst)
	{
		if (lst->item->selected)
		{
			if (printed)
				ft_putchar(' ');
			else
				printed = 1;
			ft_putstr(lst->item->name);
		}
		lst = lst->next;
	}
	exit(0);
}
