/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_default.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:30:32 by acazuc            #+#    #+#             */
/*   Updated: 2016/05/18 09:59:55 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

t_env	*g_env;

void	terminal_default(void)
{
	char	*tmp;

	if ((tmp = tgetstr("te", 0)))
		ft_putstr_fd(tmp, g_env->fd);
	if ((tmp = tgetstr("ve", 0)))
		ft_putstr_fd(tmp, g_env->fd);
	terminal_normal_mode();
}
