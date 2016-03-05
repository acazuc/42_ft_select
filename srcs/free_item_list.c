/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_item_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 16:44:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 16:46:06 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	free_item_list(t_item_list *list)
{
	free(list->item);
	free(list);
}
