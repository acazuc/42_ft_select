/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_current.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 16:41:58 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 16:51:47 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	delete_current(t_env *env)
{
	t_item_list	*prv;
	t_item_list	*nxt;

	if (!env->curr)
		error_quit(NULL);
	prv = env->curr->prev;
	nxt = env->curr->next;
	if (prv)
		prv->next = nxt;
	if (nxt)
		nxt->prev = prv;
	free_item_list(env->curr);
	if (env->items == env->curr)
		env->items = nxt;
	if (!nxt && prv)
		env->curr = prv;
	else if (nxt)
		env->curr = nxt;
	else
		env->curr = NULL;
	ft_putstr(tgetstr("cl", 0));
}
