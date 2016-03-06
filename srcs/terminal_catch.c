/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_catch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:29:19 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/06 12:57:35 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	terminal_catch(void)
{
	char	*tmp;

	if ((tmp = tgetstr("ti", 0)))
		ft_putstr(tmp);
	if ((tmp = tgetstr("vi", 0)))
		ft_putstr(tmp);
	if ((tmp = tgetstr("cl", 0)))
		ft_putstr(tmp);
	terminal_catch_mode();
}
