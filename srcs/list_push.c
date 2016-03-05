/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:13:47 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:22:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	list_push(t_env *env, t_item *item)
{
	t_item_list	*new;
	t_item_list	*lst;

	if (!(new = malloc(sizeof(*new))))
		error_quit("Failed to malloc new list item");
	new->item = item;
	new->next = NULL;
	if (!env->items)
		env->items = new;
	else
	{
		lst = env->items;
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
}
