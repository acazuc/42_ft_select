/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:39:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:41:54 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	move_up(t_env *env)
{
	t_item_list		*lst;

	if (env->curr)
	{
		lst = env->items;
		while (lst && lst != (void*)1)
		{
			if (lst->next == env->curr)
			{
				env->curr = lst;
				lst = (void*)1;
			}
			if (lst != (void*)1)
				lst = lst->next;
		}
		if (lst != (void*)1 && env->items)
		{
			lst = env->items;
			while (lst->next)
				lst = lst->next;
			env->curr = lst;
		}
	}
}
