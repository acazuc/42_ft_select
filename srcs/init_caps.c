/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_caps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 15:38:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/13 16:03:21 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	init_caps(t_caps *caps)
{
	if (!(caps->fullscreen_start = tgetstr("ti", 0)))
		error_quit("Failed to load ti cap");
	if (!(caps->fullscreen_end = tgetstr("te", 0)))
		error_quit("Failed to load te cap");
	if (!(caps->underline_start = tgetstr("us", 0)))
		error_quit("Failed to load us cpa");
	if (!(caps->underline_end = tgetstr("ue", 0)))
		error_quit("Failed to load ue cap");
	if (!(caps->highlight_start = tgetstr("so", 0)))
		error_quit("Failed to load so cap");
	if (!(caps->highlight_end = tgetstr("se", 0)))
		error_quit("Failed to load se cap");
	if (!(caps->bold_start = tgetstr("md", 0)))
		error_quit("Failed to load md cap");
	if (!(caps->bold_end = tgetstr("me", 0)))
		error_quit("Failed to load me cap");
	if (!(caps->clear = tgetstr("cl", 0)))
		error_quit("Failed to load cl cap");
	if (!(caps->move = tgetstr("cm", 0)))
		error_quit("Failed to load cm cap");
}
