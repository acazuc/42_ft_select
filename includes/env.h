/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:51:31 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 14:37:47 by acazuc           ###   ########.fr       */
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
	int				list_size;
}					t_env;

#endif
