/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:10:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:17:10 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	build_list(t_env *env, int ac, char **av)
{
	t_item		*new;
	int			i;

	i = 1;
	while (i < ac)
	{
		new = item_create();
		new->name = av[i];
		list_push(env, new);
		i++;
	}
}
