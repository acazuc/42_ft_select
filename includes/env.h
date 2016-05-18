/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:51:31 by acazuc            #+#    #+#             */
/*   Updated: 2016/05/18 09:45:40 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include "item_list.h"
# include "caps.h"

typedef struct		s_env
{
	t_item_list		*items;
	t_item_list		*curr;
	t_caps			*caps;
	char			*key_code_delete;
	char			*key_code_left;
	char			*key_code_right;
	char			*key_code_up;
	char			*key_code_down;
	int				old_width;
	int				old_height;
	int				list_size;
	int				fd;
}					t_env;

#endif
