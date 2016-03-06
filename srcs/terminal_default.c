/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_default.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 13:30:32 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/06 12:57:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	terminal_default(void)
{
	char	*tmp;

	if ((tmp = tgetstr("te", 0)))
		ft_putstr(tmp);
	if ((tmp = tgetstr("ve", 0)))
		ft_putstr(tmp);
	terminal_normal_mode();
}
