/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_default.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:30:32 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 16:15:49 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	terminal_default(void)
{
	ft_putstr(tgetstr("te", 0));
	ft_putstr(tgetstr("ve", 0));
	terminal_normal_mode();
}
