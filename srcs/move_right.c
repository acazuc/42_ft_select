/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:45:08 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:12:40 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	move_right(t_env *env)
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
		lst = lst->next;
	}
}
