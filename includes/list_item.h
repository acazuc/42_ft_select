/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_item.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 10:22:27 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 10:25:29 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_ITEM_H
# define LIST_ITEM_H

# include "list.h"

typedef struct s_list_item	t_list_item;

struct				s_list_item
{
	t_item			*item;
	t_list_item		*next;
};

#endif
