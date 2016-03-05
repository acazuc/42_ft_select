/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_catch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:29:19 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 16:16:42 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	terminal_catch(void)
{
	ft_putstr(tgetstr("ti", 0));
	ft_putstr(tgetstr("vi", 0));
	ft_putstr(tgetstr("cl", 0));
	terminal_catch_mode();
}
