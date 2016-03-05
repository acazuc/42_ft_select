/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 10:22:27 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:06:45 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITEM_LIST_H
# define ITEM_LIST_H

# include "item.h"

typedef struct s_item_list	t_item_list;

struct				s_item_list
{
	t_item			*item;
	t_item_list		*next;
	t_item_list		*prev;
};

#endif
