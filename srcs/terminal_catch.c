/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_catch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:29:19 by acazuc            #+#    #+#             */
/*   Updated: 2016/05/18 10:00:24 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

t_env	*g_env;

void	terminal_catch(void)
{
	char	*tmp;

	if ((tmp = tgetstr("ti", 0)))
		ft_putstr_fd(tmp, g_env->fd);
	if ((tmp = tgetstr("vi", 0)))
		ft_putstr_fd(tmp, g_env->fd);
	if ((tmp = tgetstr("cl", 0)))
		ft_putstr_fd(tmp, g_env->fd);
	terminal_catch_mode();
}
