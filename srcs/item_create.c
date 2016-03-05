/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:12:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:13:30 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

t_item	*item_create(void)
{
	t_item	*new;

	if (!(new = malloc(sizeof(*new))))
		error_quit("Failed to create new list item");
	return (new);
}
