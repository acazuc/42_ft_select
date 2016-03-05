/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:44:49 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:14:43 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	move_left(t_env *env)
{
	t_item_list	*lst;
	int			i;

	lst = env->curr;
	i = 0;
	while (lst)
	{
		if (i == tgetnum("li"))
		{
			env->curr = lst;
			return ;
		}
		i++;
		lst = lst->prev;
	}
}
