/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:37:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:38:30 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	move_down(t_env *env)
{
	if (env->curr)
	{
		if (env->curr->next)
			env->curr = env->curr->next;
		else
			env->curr = env->items;
	}
}
