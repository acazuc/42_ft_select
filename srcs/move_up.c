/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:39:25 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:11:10 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	move_up(t_env *env)
{
	t_item_list		*lst;

	if (env->curr)
	{
		if (env->curr->prev)
			env->curr = env->curr->prev;
		else
		{
			lst = env->items;
			while (lst->next)
				lst = lst->next;
			env->curr = lst;
		}
	}
}
