/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:51:31 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/13 16:47:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include "caps.h"

typedef struct		s_env
{
	t_caps			*caps;
	char			*key_code_delete;
	char			*key_code_left;
	char			*key_code_right;
	int				list_size;
	int				position;
	char			**list;
}					t_env;

#endif
